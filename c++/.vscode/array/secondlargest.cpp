#include<iostream>
using namespace std;
int main(){
    int n ,x;
    cout<<"\nEnter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elemets of array:\n";
    for(int i =0;i<n;i++)
      cin>>arr[i];
    for(int i =0 ;i<n;i++){
        for(int j = i+1 ;j<n; j++){ 
        if(arr[i]<arr[j]){
            x = arr[i];
            arr[i] = arr [j];
            arr [j] = x;
        }
    }  
    }
    cout<<"\n second largest number is:"<<arr[1];
    cout<<endl;
    return 0;
        
    
}
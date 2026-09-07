// Rearrange Array Elements by Sign
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the arrays";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result(n);
    int pi = 0;//positive index
    int ni  = 1;//negstive index
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            result[pi] = arr[i];
            pi += 2;
        }else{
            result[ni]= arr[i];
            ni += 2;
        }
    }
    cout<<"The rearranged array is :";
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
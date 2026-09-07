//"This program counts how many elements in the array are greater than the given number x."

#include<iostream>
#include<climits> 
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter the given number:";
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++)
    {
    if(arr[i]>x)
       count++;
    }
    
   cout<<count;
}
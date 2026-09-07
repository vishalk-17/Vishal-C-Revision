#include<iostream>
#include<vector>
using namespace std;
int main()
{
int m;
cout<<"enter rows of  matrix:";
cin>>m;

int n;
cout<<"enter column of  matrix:";
cin>>n;
int arr[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}
cout<<endl;
/*
//wave print 
for(int i=0;i<m;i++) //for(int i=m-1;i>=0;i--)//3
{
    if(i%2==0)// if(i%2!=0) ///q2
    {
        for(int j=0;j<n;j++)
        {

        cout<<arr[i][j]<<" ";
        }
    }
    else{
        for(int j=n-1;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}*/
for(int j=0;j<n;j++)
{
    for(int i=0;i<m;i++)
    {
        cout<<arr[i][j]<<" ";
    }
}

}
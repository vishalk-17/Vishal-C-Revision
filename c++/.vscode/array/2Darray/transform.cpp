#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m;
    cout<<"enter the no of rows/columns";
    cin>>m;
int arr[m][m];
for(int i=0;i<=m-1;i++)
{
    for(int j=0;j<=m-1;j++)
    {
        cin>>arr[i][j];
    }
}
cout<<"\n";
//print
for(int i=0;i<=m-1;i++)
{
    for(int j=0;j<=m-1;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
//transpose the matrix
for(int i=0;i<=m-1;i++)
{
    for(int j=i+1;j<=m-1;j++)
    {
//swapping of i,j and j,i
int temp=arr[i][j];
arr[i][j]=arr[j][i];
arr[j][i]=temp;

    }
}
//print
for(int i=0;i<=m-1;i++)
{
    for(int j=0;j<=m-1;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
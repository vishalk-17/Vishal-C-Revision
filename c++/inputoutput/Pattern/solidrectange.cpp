#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"no of rows:";
    cin>>n;
    int m;
    cout<<"no of column:";
    cin>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
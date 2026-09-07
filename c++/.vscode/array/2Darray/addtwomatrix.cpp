#include<iostream>
#include<climits>
using namespace std;
int main()
{ 
    /*
int a[2][3]={1,2,3,4,5,6};
int b[2][3]={7,8,9,10,11,12};
int res[2][3];
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    res[i][j]=a[i][j]+b[i][j];
}
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
}*/



//2 program


int a[2][3]={1,2,3,4,5,6};
int b[2][3]={7,8,9,10,11,12};

//a
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
//b
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
//b ka andar a addk krna hai
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
       b[i][j] += a[i][j];
    }
    
}
cout<<endl;
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}


}
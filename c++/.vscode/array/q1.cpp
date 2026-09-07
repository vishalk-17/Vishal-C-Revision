#include<iostream>
using namespace std;
int main()
{
    /*
    //input
    int marks[6];
    for(int i=0;i<=5;i++){
        cin>>marks[i];
    }
    //output
    for( int i=0;i<=5;i++)
    {
        if(marks[i]<35)
        cout<<i<<" ";
    }*/

int n;
cout<<"enter the number of student:";
cin>>n;
int marks[n];
cout<<"enter the marks:";
//input
for(int i=0;i<=n-1;i++)
{
    cin>>marks[i];
}
for(int i=0;i<=n;i++)
{
    if(marks[i]<35)
    {
        cout<<i<<" ";
    }
}

}
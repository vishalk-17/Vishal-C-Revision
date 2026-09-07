#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"no of rows";
    cin>>n;
    /*
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j+=2)
        {
            cout<< j ;

        }
        cout<<endl;
    }
}*/
 //second method
for(int i=1;i<=n;i++)
{
    int a=1;
    for(int j=1;j<=n;j++)
    {
    cout<<a;
    a+=2;
}
cout<<endl;
}
}





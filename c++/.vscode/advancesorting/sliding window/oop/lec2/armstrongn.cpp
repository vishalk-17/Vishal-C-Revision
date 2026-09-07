#include<iostream> 
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    int sum=0;
    int m;
    m=n;
   
   for(int i=1;i<n;i++)
    {      
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
        if(sum==n)
        {
            cout<<"perfect number"<<" ";
        }
        else
        {
            cout<<"not perfect numebr";
        }
    
}
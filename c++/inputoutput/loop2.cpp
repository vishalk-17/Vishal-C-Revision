// break statment
//wap to check if a number is prime or not
//it has no factor other than 1 and the number itself

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    bool flag=true;//true means prime
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)//i is a factor of n
        {
            flag=false;//false means composite
            break;
        }
    }
    if(n==1) cout<<" 1 is neither prime nor composite"
    else if(flag==true)
     cout<<n<<" is prime ";
     else
     cout<<n<<" is composite";
}*/

//continue statement

//wap to print odd numebr  from 1 to 100'
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if(i%2==0)
        continue;
        cout<<i<<endl;
    }
}*/

// wap to count digits of a  given numebr 

/* int n=1971=4*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
     int count=0;
     int a=n;
     while(n>0)
     {
        n/=10;
        count++;
     }
      cout<<count;
     if(a==0)
     cout<<1;
     else
     cout<<count;
}*/

//wap to print sum of digit of a given numer
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
     int lastdigit=0;
     int sum=0;
     while(n>0)
     {
       lastdigit=n%10;
       sum+=lastdigit;
       n/=10;
     }
      cout<<sum;
     
}*/

//wap to print reverse of a given numebr
/*include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    int lastdigit=0;
    int reverse=0;
    while(n>0)
    {
        reverse*=10;
        lastdigit=n%10;
        reverse+=lastdigit;
        n/=10;
    }
    cout<<reverse;
}*/

//print the sum of this series: 1-2+3-4+5-6...upto n
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    int sum=0;
    if(n%2==0)
    sum=-n/2;
    else sum=-n/2+n;
    cout<<sum;
}*/

//print the factorial of a given number n
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    int product=1;
    for(int i=1;i<=n;i++)
    {
        product*=i;
    }
    cout<<product;
}*/

//print the nth fibpnacci number
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
     int a=1;
     int b=1;
     int sum=0;
     for(int i=1;i<=n-2;i++)
     {
        sum=a+b;
        a=b;
        b=sum;
     }
     cout<<b;
}*/

//two number are entered through the keyword.write a program to find the value of one number raised to power of another
/*
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the base:";
    cin>>n;
    cout<<"enter exponent";
    cin>>m;
    int power=1;
    for(int i=1;i<=m;i++)
    {
        power=power*n;
    }
    
   cout<<power;
}*/

//write a program to find the zero in factorial

#include<iostream>
using namespace std;
int myfun(int n){
    int count=0;
    while(n>=5){
        n/=5;
        count +=n;
    }
    return count;
}


int main(){
  int number=100;
  int findzero = myfun(number);
  cout<<"the total number of zero in->"<< number << "->is" << findzero;

    return 0;

}
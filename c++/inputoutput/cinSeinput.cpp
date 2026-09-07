#include<iostream>
using namespace std;
 int main()
 {
    //1 program
    /*int x;
    cout<<"enter a number";
    cin>>x;//x ko ek value doonga
    cout<<x;
*/
//2 program square a given number

/*int x;
cout<<"enter a number";
cin>>x;
int y=x*x;
cout<<"the square of the numberg is:"<<y;
*/

//3 program area of circle
/*
float radius;
cout<<"enter the radius:";
cin>>radius;
float area=3.1415*radius*radius;
cout<<"area is:";
cout<<area<<endl;
*/

//sum of 2 given number
/*int x;
cout<<"enter the first number\n";
cin>>x;
int y;
cout<<"enter the second number\n";
cin>>y;
int sum=x+y;
cout<<"sum of the given  2 number is:"<<sum;
 */

// 4predict the output
/*int p,q;
cout<<"enter valuse of p and q";
cin>>p>>q;
cout<<"p="<<p<<"q="<<q;*/

//5 assigment operator

//bool p=false;
//bool q=false;
//bool r= true;

/*int p=1;
int q=2;
 int r=2;
cout<<(p==q==r);//(p==q)==(r)->(0)==2->0
//(p)==(q==r)->(1)==(2==2)->1
*/

/* 6
//char data type
char ch='A';

//cout<<ch;
cout<<(int)ch;*/


//type casting
/*
float x=7.1;
int y;
y=(int)x;
cout<<y;*/

//char  ch='A';

//cout<<(int)ch+100;

//7

/*char ch='A';
int x=(int)ch;
cout<<x-64;*/

//8take integer as input and print half of the number
/*int x;
cin>>x;
float y=(float)x;
cout<<y/2;
*/


//9 take float input and print the fractional part of the real number
/*
float x;
cin>>x;//9'1
int y=(int)x;//y=9
if(y<0) y=y-1;
int z=(float)y;//z=9
x=x-z;
cout<<x;*/

//10 hierarchy of operators

/*int i=2*3/4+4/4+8-2+5/8;// left to right 6/4+1+8-2+0=1+1+6=8
cout<<i;*/


//11 find the output
/*
int num1;
int p=5, q=10;
p+=q-=p;
cout<<p<<" "<<q<<endl;

// predict the output

int i=2,j=3,k,l;
float a,b;
k=i/j*j;//0
l=j/i*i;//2
a=i/j*j;//0
b=j/i*i;//2
cout<<k<<" "<<l<<" "<<a<<" "<<b;
*/


cout<<"enter a number";
int n;
cin>>n;
if(n%2==0)
{
    cout<<"even";
}
if(n%2!=0){

    cout<<"odd";
}


 }
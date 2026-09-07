#include<iostream>
using namespace  std;
int main()
{

/// for loop

// print hello word n times. take n as input from use
/* int n;
cout<<"enter the number";

cin>>n;
for(int i=1;n<=n; i++)
{
    cout<<"hello word"<<endl;
}*/

// print numbers from 1 to 100

/*for(int i=1; i<=100; i++)
{
    cout<<i<<endl;
}*/

// print the even number 1  to 100


/*

for(int i=1; i<=100;i++)
{
    if(i%2==0)
    {
        cout<<i<<endl;
    }
}*/

// print the table of 19

/*
for(int i =19; i<=190;i+=19)
{
    cout<<i<<endl;
}*/

// display this ap-1,3,5,7,9... upto n terms.
/*
int n;
cout<<"enter the number:";
cin>>n;*/
/*metod 1

for(int i=1; i<=2*n-1; i+=2)
{

cout<<i<<endl;


}*/


/*2 metod

int a=1;
for( int i=1;i<=n;i++)
{

cout<<a<<endl;
a=a+2;

}*/

// display this ap 1,2,4,8,16,32..... nth terms
/*
int n;  
 cout<<"enter the number";
 cin>>n;
  int a=1;
  for(int i=1;i<=n;i++)
  {
    cout<<a<<endl;
    a=a*2;
  }
*/

// display this  ap 100,97,94... upto all terms which are positive
/*
  int a=100;
  for(int i=1; i<=34;i++ )// a>0  use kr sakta ha i<=34 
  {
    cout<<a<<endl;
    a=a-3;
  }
*/

//// while loop
 /*
 int i=1;
while (i<=10)
{
cout<<i<<endl;
i++;
}*/

// predict the output
//int j;
/* garbage values

while(j<=10)
{
    cout<<j<<endl;
    j=j+1;
}
*/
/*
int x=1;
while(x==1)
{
    x=x-1;
    cout<<x<<endl;
}
*/


////do-while loop
/*int i=11;


do{
    cout<<i<<endl;
    i++;
}
while(i<=10);*/

// print all alphabets(uppercase) with their ascii values
/*for(int i=65; i<=90; i++)
{
    cout<<(char)i<<" "<<i<<endl;
}*/

///break;

//wap to check if a number is prime or not
/*
int n;
cout<<"enter a number";
cin>>n;
bool flag = true;
for(int i=2;i<=n-1;i++)
{
    if(n%i==0)
    {
       flag =false;
       break; 
    }
}

if (flag) {
        cout << n << " is a prime number." << endl;
} else {
        cout << n << " is not a prime number." << endl;
}*/


/*  2 second approach

int n,count;
count=0;
cout<<"enter a numebr";
cin>>n;
for(int i=1;i<=n;i++)
    if(n%i==0)
        count =count+1;
    if(count==2)
        cout<<"number is prine";
    
    else
        cout<<"number is not prime";
    */

 /*   third approach
   int n,count;
   count=0;
   cout<<"enter a numebr";
   cin>>n;
   for(int i=1;i*i<=n;i++){
    if(n%i==0){
        count = count+1;
        if(n/i!=i)
        count= count+1;
    }
    if(count>2)
    break;
   }
if(count==2)
cout<<"numebr is prime";
else
cout<<"the number is not primee"; */


//perfect numebr

int n,rem,sum=0;
cout<<"enter the number:";
cin>>n;
for(int i=1;i<=n/2;i++){
    rem=n%i;
    if(rem==0){
        sum +=i;
    } 

}
  if (sum==n) {
        cout << n << " is a perfect number." << endl;
} else {
        cout << n << " is not a perfect number." << endl;
}





}


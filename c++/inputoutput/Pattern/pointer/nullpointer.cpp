#include<iostream>
using namespace std;
int main()
{/*
    int *ptr=NULL;//reserved address
    cout<<ptr;
    //cout<<&ptr;

//\0->null character
*/
/*
int*ptr1=NULL;
int*ptr2=0;
int*ptr3='\0';
cout<<ptr1<<" "<<ptr2<<" "<<ptr3;
*/


//double pointer
/*
int x=5;
int*ptr=&x;
int**p=&ptr;
cout<<x<<endl;
cout<<ptr<<endl;
cout<<p<<endl;*/
/*
int x=5;
int*ptr=&x;
int**p=&ptr;
cout<<x<<endl;
cout<<*ptr<<endl;
cout<<**p<<endl;
*/

int x=5;
int*ptr=&x;
int**p=&ptr;
cout<<&x<<endl;
cout<<ptr<<endl;
cout<<*p<<endl;//x ka address




}
#include<iostream>
using namespace std;
int main()
{ /*
    int  x=7;
    int*ptr=&x;
    cout<<ptr<<endl;//0x16f155ec
    ptr=ptr+1;
    cout<<ptr<<endl;//ox16fi55e0*/
/*
int x=4;
int*ptr=&x;
cout<<ptr<<endl;
ptr=ptr+1;
cout<<*ptr<<endl;
  wrong not print *ptr
*/

int x=4;
int*ptr=&x;
cout<<ptr<<endl;
*ptr=*ptr+1;/// *ptr++; not right// (*ptr)++right
cout<<*ptr<<endl;





}
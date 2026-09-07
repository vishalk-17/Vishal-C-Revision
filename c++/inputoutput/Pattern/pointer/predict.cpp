#include<iostream>
using namespace std;
int main()
{

int a=15;
int*ptr=&a;
cout<<ptr<<endl;
int b=(*ptr)++;
cout<<a<<" "<<b;
}
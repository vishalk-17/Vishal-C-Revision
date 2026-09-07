#include <algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{

    // length()function
    /*
    string str="raghav garg is at pw";
    cout<<str.length();
int len=str.length();
*/

//push_back()
/*
string str="abc";
cout<<str<<endl;
str.push_back('d');
cout<<str<<endl;
*/

//pop_back()
/*
string s= "{vishal";
cout<<s<<endl;
s.pop_back();
cout<< s <<endl;*/

//+operator
/**string s="abc";
cout<<s<<endl;
s="xyz"+s;
cout<<s<<endl;
*/

//reverse()


string s="abcdef";
cout<<s<<endl;

 reverse (s.begin()+2,s.end()+5);


cout<<s<<endl;
    }
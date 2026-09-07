#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
   unordered_map<string,int>m;
   pair<string,int>p1;
   p1.first="vishal";
   p1.second=100;
   pair<string,int>p2;
   p2.first="ritik";
   p2.second=76;
   m.insert(p1);
   m.insert(p2);

   m["krishna"]=15;

   for(auto p : m)
   {
    cout<<p.first<<" "<<p.second<<endl;
   }
   cout<<m.size()<<endl;
   m.erase("vishal");
   m.erase("ritik");
   for(auto p : m)
   {
    cout<<p.first<<" "<<p.second<<endl;
   }
   cout<<m.size()<<endl;
}
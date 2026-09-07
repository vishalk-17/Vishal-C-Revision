#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(2);
    int target=40;
    //s.find()->if srearch in the set,and if
    //it is not found them if returns the last element
    //for each loop
    if(s.find(target)!=s.end())
    {
        cout<<"exists"<<endl;
    }
    else cout<<"does not exist"<<endl;
    for(int ele : s)
    {
        cout<<ele<<" ";
    }
}
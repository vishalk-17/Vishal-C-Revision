//creatin of a lonked  list
#include<iostream>
using namespace std;
class Node  //Linked list node
{
    public:
    int val;
    Node*next;
    Node(int val)
    {
        this ->val=val;
        this ->next=NULL;
    }
};
int main()
{
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //forming ll
    a.next=&b;
    b.next=&c; 
    c.next=&d;
   cout<<(a.next)->val;
     
     //print without use in c
     //cout<<((a.next)->next)->val;

    // print karani hai d ki value

   // cout<<(((a.next)->next)->next)->val; 

//print using loop
/*
Node temp=a;
while(temp.next!=NULL)
{
    cout<<temp.val<<" ";
    temp=*(temp.next);

}
output=10 20 30 not print 40

*/
    

  /* 
  Node temp=a;
while(1)
{
    cout<<temp.val<<" ";
    if(temp.next==NULL)
    break;
    temp=*(temp.next);
    
    //output=10 20 30 40
}
  */


   
}
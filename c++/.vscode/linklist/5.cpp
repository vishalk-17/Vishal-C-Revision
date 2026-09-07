//implementation through liked list class
//insertatend method
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
class LinkedList
{
    public:
    Node*head=NULL;
    Node*tail;
    int size;
    LinkedList()
    {
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val)
    {
        Node*temp=new Node(val);
        if(size==0)
        {
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void Display()
    {
      Node*temp=head;
      while(temp!=NULL)
      {
        cout<<temp->val<<" ";
        temp=temp->next;
      }
      cout<<endl;
    }
};
int main()
{
    LinkedList ll ;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.Display();
   // cout<<ll.size<<endl;

}

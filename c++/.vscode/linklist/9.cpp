//deletr at head

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
    Node*head;
    Node*tail;
    int size;
    LinkedList()
    {
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val)
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
    void insertAtHead(int val)
    {
        Node*temp=new Node(val);
        if(size==0)
        {
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
     void insertAtID(int idx,int val)
    {
        if(idx<0 ||idx>size)
        cout<<"invalid index"<<endl;
        else if(idx==0)
        insertAtHead(val);
        else if(idx==size)
        insertAtTail(val);
        else{
            Node*t=new Node(val);
            Node*temp=head;
            for(int i=1;i<=idx-1;i++)
            {
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;

        }
    }
    int getAtIDX(int idx)
    {
        if(idx==0 ||idx>=size)
        {
            cout<<"invalid index";
            return-1;
        }
        else if(idx==0)
        return head->val;
        else if(idx==size-1)
        return tail->val;
        else{
            Node*temp=head;
            for(int i=1;i<=idx;i++)
            {
            temp=temp->next;
            }
             return temp->val;
        }
         
    }
    void DeleteAtHEAD()
    {
        if(size==0)
        {
            cout<<"list is empty";
            return;
        }
        head=head->next;
        size--;
    }
    void DeleteAtTail()
    {
        if(size==0)
        {
            cout<<"list is empty";
            return;
        }
       Node*temp=head;
       while(temp->next!=tail)
       {
        temp=temp->next;
       }
       temp->next=NULL;
       tail=temp;
       size--;
    }
    void DeleteAtIDX(int idx)
    {
        if(idx==0)
        {
            cout<<"list is empty";
            return;
        }
        else if(idx<0 || idx>=size)
        {
            cout<<"invalid index";
            return ;
        }
        else if(idx==0)
        return DeleteAtHEAD();
        else if(idx==size-1)
        return DeleteAtTail();
        else{
            Node*temp=head;
            for(int i=1;i<=idx-1;i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
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
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.Display();
    
    
   // cout<<ll.size<<endl;
   //ll.insertAtHead(50);
   //ll.Display();
  // ll.insertAtID(4,60);
  // ll.Display();
  // cout<<ll.getAtIDX(3)<<endl;

  // ll.DeleteAtHEAD();
  // ll.Display();
  // ll.DeleteAtTail();
  // ll.Display();
   ll.DeleteAtIDX(2);
   ll.Display();
}

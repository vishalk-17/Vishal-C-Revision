//dispaly the  linked list
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
void display(Node*head)
{
    
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
   int size(Node*head)//linked list size print
{
    Node*temp=head;
    int n=0;
    while(temp!=NULL)
    {
        n++;
        temp=temp->next;
    }
    return n;
}
//display in revese order
void revDisplay(Node*head)
{

    if(head==NULL)//base case
    return ;
    revDisplay(head->next); //call
    cout<<head->val<<" ";//kaam
}
void displayrec(Node*head)
{
    if(head==NULL)//base case
    return ;
    cout<<head->val<<" ";//call
    displayrec(head->next);//kaam
}

int main()
{
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    //display(a);
    
    
    //displayrec(a);
    revDisplay(a);
    
}  
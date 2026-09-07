//Basic maxheap program
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>pq;//maxHeap
    pq.push(10);
    pq.push(2);
    pq.push(6);
    pq.push(-6);
    pq.push(8);
    cout<<pq.top();
    pq.pop();
    cout<<pq.top()<<endl;

}
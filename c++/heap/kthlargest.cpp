//find the kth largest element in a given arrya
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
    int Findkthlargest(vector<int>&arr,int k)
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int num : arr)
        {
           if(pq.size()<k)
           {
            pq.push(num);
           }
           else{
            if(num>pq.top())
            {
                pq.pop();
                pq.push(num);
            }
           }
        }
        return pq.top();
    }
int main()
    {
       vector<int>arr={10,20,-4,5,18,24,1,-7,56};
       int k=1;
       int result=Findkthlargest(arr,k);
       cout<<"the"<<k<<"th largest element is:"<<result<<endl;
       return 0;
    }

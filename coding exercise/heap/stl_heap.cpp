#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // max heap  by default
    priority_queue<int>pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    cout<<"top"<<pq.top()<<endl;
    pq.pop();
    cout<<"top"<<pq.top()<<endl;
    cout<<"size"<<pq.size()<<endl;
    if(pq.empty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"not empty"<<endl;
    }
cout<<endl<<endl;
    //  min heap
    priority_queue<int,vector<int>,greater<int>>p_q;
     
    p_q.push(10);
    p_q.push(20);
    p_q.push(30);
    p_q.push(40);
    cout<<"top"<<p_q.top()<<endl;
    p_q.pop();
    cout<<"top"<<p_q.top()<<endl;
    cout<<"size"<<p_q.size()<<endl;
    if(p_q.empty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"not empty"<<endl;
    }
}
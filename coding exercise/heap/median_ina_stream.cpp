#include<iostream>
#include<queue>
using namespace std;

void solve(double &median, priority_queue<int>&maxheap, priority_queue<int,vector<int>,greater<int>>&minheap,int element)
{
    if(maxheap.size()==minheap.size())
    {
        if(element >median)
        {
            minheap.push(element);
            int top=minheap.top();
            median=top;
        }
        else
        {
            maxheap.push(element);
            median=maxheap.top();
        }


    }
    else if(maxheap.size()==minheap.size()+1)
    {
        if(element > median)
        {
            minheap.push(element);
        }
        else
        {
            int top=maxheap.top();
            maxheap.pop();
            minheap.push(top);
            maxheap.push(element);
        }
        median=(minheap.top()+maxheap.top())/2.0;


    }
    else if(minheap.size()==maxheap.size()+1)
    {
        if(element > median)
        {
             int top=minheap.top();
            minheap.pop();
            maxheap.push(top);
            minheap.push(element);
            
        }
        else
        {
            maxheap.push(element);
           
        }
        median=(minheap.top()+maxheap.top())/2.0;

    }
    
}

int main()
{
    int arr[]={12,10,8,4,2,3,15};
    int n=7;
    double median=0;
    priority_queue<int,vector<int>,greater<int>>minheap;
    priority_queue<int>maxheap;
    for(int i=0;i<n;i++)
    {
        solve(median,maxheap,minheap,arr[i]);
        cout<<"medain  "<<median<<endl;

    }
   

}
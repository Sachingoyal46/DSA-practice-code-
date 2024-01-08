#include<iostream>
#include<queue>

using namespace std;

int getkth_smallest(int arr[],int size,int k)
{
    priority_queue<int>pq;
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }

    for(int i=k;i<size;i++)
    {
        int element=arr[i];
        if(element < pq.top())
        {
            pq.pop();
            pq.push(element);

        }
    }
    return pq.top();
}

int getkth_largest(int arr[],int size,int k)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<k;i++)
    {
        pq.push(arr[i]);
    }

    for(int i=k;i<size;i++)
    {
        int element=arr[i];
        if(element > pq.top())
        {
            pq.pop();
            pq.push(element);

        }
    }
    return pq.top();
}

int main()
{
    int arr[]={3,7,4,5,6,8,9};
    int size=7;
    int k=4;
    int temp=getkth_smallest(arr,size,k);
    int temp1=getkth_largest(arr,size,k);
    cout<<temp<<endl;
    cout<<temp1;
}
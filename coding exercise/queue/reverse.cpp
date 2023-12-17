#include<iostream>
#include<stack>
#include<queue>
using namespace std;


// void reverse(queue<int>&q)
// {
//     stack<int>s;
//     while(!q.empty())
//     {
//         int temp=q.front();
//         q.pop();
//         s.push(temp);
//     }

//     while(!s.empty())
//     {
//         int temp=s.top();
//         s.pop();
//         q.push(temp);

//     }
// }
// by recursion


// void reverse(queue<int>&q)
// {
//     if(q.empty())
//     {
//         return ;
//     }

//     int temp=q.front();
//     q.pop();

//     reverse(q);
//     q.push(temp);
// }

// void reverse_K_element(queue<int>&q,int k)
// {
//     stack<int>s;
//     int n=q.size();
//     for(int i=0;i<k;i++)
//     {
//         int temp=q.front();
//         q.pop();
//         s.push(temp);
        
        
//     }
//     while(!s.empty())
//     {
//         int temp=s.top();
//         s.pop();
//         q.push(temp);
//     }

//     for(int i=0;i<(n-k);i++)
//     {
//         int temp=q.front();
//         q.pop();
//         q.push(temp);
//     }
// }


void interleave(queue<int>&first)
{
    int size=first.size();
    queue<int>second;
    for(int i=0;i<size/2;i++)
    {
        int temp=first.front();
        first.pop();
        second.push(temp);
    }
    for(int i=0;i<size/2;i++)
    {
        int temp=second.front();
        second.pop();
        first.push(temp);

        int temp1=first.front();
        first.pop();
        first.push(temp1);
    }
}

int main()
{

    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);;
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);


    // reverse(q);
    // reverse_K_element(q,3);
    interleave(q);

    while(!q.empty())
    {
        int temp=q.front();
        cout<<temp<<" ";
        q.pop();
    }

    



}
#include<iostream>
#include<stack>
#include<vector>
using namespace std;




 vector<int> nextsmallerelements(int * arr,int size,vector<int> &ans)
{
    stack<int> s;
    s.push(-1);

    for(int i=size-1;i>=0;i--)
    {

        int current=arr[i];
        while(s.top()>=current)
        {
            s.pop();
        }

        ans[i]=s.top();
        s.push(current);

    }
    return ans;

    

}


int main()
{
        int arr[5]={8,5,3,2,9};
        int size=5;

        vector<int>ans(size);
      ans=  nextsmallerelements(arr,size,ans);

        for (auto i : ans)
        {
            cout<<i<<" ";
        }

}



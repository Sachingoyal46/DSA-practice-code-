#include<iostream>
#include<stack>
#include<vector>
using namespace std;




 vector<int> nextsmallerelements(int * arr,int size,vector<int> &ans)
{
    stack<int> s;
    s.push(-1);

    for(int i=0;i<size;i++)
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
        int arr[6]={8,4,5,6,2,3};
        int size=6;

        vector<int>ans(size);
      ans=  nextsmallerelements(arr,size,ans);

        for (auto i : ans)
        {
            cout<<i<<" ";
        }

}



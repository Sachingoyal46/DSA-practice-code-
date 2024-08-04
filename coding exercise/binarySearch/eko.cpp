#include<iostream>
using namespace std;
#include<bits./stdc++.h>


bool ispossible(vector<int>v ,int n , int m , int mid)
{   

    
    int sum=0;
    for(int i=0;i<v.size();i++)
    {   
        if(v[i] > mid )
        {
            sum += v[i]-mid;
        }
        
    }
    
   return sum >=m;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        int height;
        cin>>height;
        v.push_back(height);
    }

    int start=0;
    int end;
    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        maxi=max(maxi,v[i]);
    }
   
    end=maxi;
    int ans=-1;

    while(start <= end)
    {
        int mid=start +(end-start)/2;
        if(ispossible(v,n,m,mid))
        {   
            // cout<<"enter if"<<endl;
            ans=mid;
            start=mid+1;
        }
        else{
            // cout<<"enter else"<<endl;
            end=mid-1;
        }
    }
   cout<<ans;
}
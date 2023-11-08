#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;


bool my_comp(vector<int>&a,vector<int>&b)
{
    return a[1]>b[1];  // dec order
    // return a[1]<b[1]  inc order

}


void printt(vector<vector<int>>&v)
{
    for(int i=0;i<v.size();i++)
    {
        vector<int>&temp=v[i];
        int a=temp[0];
        int b=temp[1];

        cout<<a<<" "<<b<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<vector<int>>v;
    cout<<"enter the size";

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {   
        cout<<"enter the value of a and b";
        int a,b;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    sort(v.begin(),v.end()); // this is for increasing order sorting
     sort(v.begin(),v.end(),my_comp);// third algument function lega
    printt(v);

}
#include<iostream>
#include<vector>
using namespace std;


void insertion_sort(vector<int>&v)
{
    int key;
    int n=v.size();
    int j;
    for(int i=1;i<=n;i++)
    {
        key=v[i];
        j=i-1;


        while(j>=0  && v[j]>key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
}








int main()
{
    vector<int>v={5,4,0,2,1};
    insertion_sort(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
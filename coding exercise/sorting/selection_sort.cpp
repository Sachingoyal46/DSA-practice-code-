#include<iostream>
#include<vector>
#include<limits>
using namespace std;

void selection_sort(vector<int>&v)
{

    for(int i=0;i<v.size()-1;i++)
    {   
        int minterm=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]<v[minterm])
            {
                minterm=j;
            }
            
        }
        swap(v[i],v[minterm]);
    }
}




int main()
{
    vector<int>v={44,33,55,22,11};

    selection_sort(v);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
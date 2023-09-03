#include<iostream>
#include<vector>
using namespace std;

int row_sum(int arr[][3],int n,int m)
{
    vector<int>v;
   
    for(int i=0;i<n;i++)
    {   
         int sum=0;
        for(int j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
        v.push_back(sum);

    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}

int largest_row_sum(int arr[][3],int n,int m)
{
    int maxi=INT32_MIN;
    int row_index=-1;
    for(int i=0;i<n;i++)
    {   
         int sum=0;
        for(int j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
        if(maxi<sum)
        {
            maxi=sum;
            row_index=i;
        }
    }
    cout<<"the maximum sum is "<<maxi <<endl;
    return row_index;
}

    bool ispresent(int arr[][3],int target,int n,int m)
    {
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;
    }

int main()
{

    int arr[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"";
        }cout<<endl;
    }
    int n=3;
    int m=3;
    // cout<<"enter the search elements"<<endl;
    // int s;
    // cin>>s;
    // if(ispresent(arr,s,n,m))
    // {
    //     cout<<"elements are found"<<endl;
    // }
    // else
    // {
    //     cout<<"not found"<<endl;
    // }

    row_sum(arr,n,m);

    cout<<"largest row sum is"<<largest_row_sum(arr,n,m)<<endl;
}
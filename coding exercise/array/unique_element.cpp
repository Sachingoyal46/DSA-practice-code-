#include<iostream>
using namespace std;

int get_unique(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}



int main()
{
    int n=9;
    int r;
    int arr[]={2,10,11,13,10,2,15,13,15};

    int result  = get_unique(arr,n);
    cout<<"final result is  " <<result<<endl;

   
}
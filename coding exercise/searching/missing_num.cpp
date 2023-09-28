#include<iostream>
using namespace std;

int missing_number(int a[],int n)
{
    int i=0;
    int j=n-1;
    int ans=-1;

    while (i<=j)
    {
        int mid=i+j/2;
        int diff=a[mid]-mid;

        if(diff==1)
        {
            i=mid+1;
        }
        else
        {
            ans=mid;
            j=mid-1;
        }
    }

    return ans+1;
    
}

int main()
{
    int a[]={1,2,3,4,6,7,8,9};
    cout<<missing_number(a,8); 
}
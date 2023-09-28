#include<iostream>
using namespace std;


int odd_occuring(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(s==e)
        {
            return s;
        }

        if(mid & 1)
        {
            if(mid-1>=0 &&a[mid-1]==a[mid])
            {
                s=mid+1;

            }
            else
            {
                e=mid-1;
            }
        }

        else
        {
            if(mid+1 <n && a[mid]==a[mid+1])
            {
                s=mid+2;
            }
            else
            {   
                e=mid;
            }
        }
        mid=s+(e-s)/2;

    }
    return mid;
}




int main()
{
    int a[]={1,1,5,5,2,2,3,3,2,4,4};
    int n=11;
    int ans=odd_occuring(a,n);
    cout<<"ans"<<ans;
}

#include<iostream>
using namespace std;

int first_occurence(int a[],int n,int target)
{
    int i=0;
    int last=n-1;
    int first=0;
    int end=0;


    while(i<=last)
    {
        int mid=i+(last-i)/2;
        if(a[mid]==target)
        {
            first=mid;
            last=mid-1;
            
        }
        else if(a[mid]<target)
        {
            i=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    return first;
}

int second_occurence(int a[],int n,int target)
{
    int i=0;
    int last=n-1;

    int end=0;


    while(i<=last)
    {
        int mid=i+(last-i)/2;
        if(a[mid]==target)
        {
            end=mid;
            last=mid+1;
            
        }
        else if(a[mid]<target)
        {
            i=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    return end;
}

int tottal_occurence(int a[],int n,int target)
{
    int first=first_occurence(a,n,target);
    int last=second_occurence(a,n,target);

    int tottal=last-first +1;
    return tottal;
}

int main()
{
    int a[]={1,2,2,3,3,3,3,4};
    cout<<tottal_occurence(a,8,1);
    return 0;
}
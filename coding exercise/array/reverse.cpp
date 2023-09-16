#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int a[]={2,3,4,5,6,7};
    int size=6;

    int i=0;
    int j=size-1;
    while(i<j)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;

    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }
}
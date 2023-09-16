#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int a[]={1,2,30,4,5,6,7,8,9};
    int n=9;

    int max=INT16_MIN;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

    }
    cout<<max;

}
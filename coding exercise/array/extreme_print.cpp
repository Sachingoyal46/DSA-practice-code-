#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6};
    int n=6;

    int i=0;
    int j=n-1;

    while(i<j)
    {
        cout<<a[i]<<a[j];
        i++;
        j--;
    }
}
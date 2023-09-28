#include<iostream>

using namespace std;

int binary_search(int a[],int f,int l,int t)
{

    while (f<l)
    {
        int mid=f+l/2;
   if(a[mid]==t)
   {
    return mid;
   }
   else if(a[mid]<t)
   {
        f=mid+1;
   }
   else
   {
    l=mid-1;
   }
    }
    return -1;
    
   

}

int main()
{
    int a[]={1,2,3,4,5,6,7};
    int first=1;
    int last=7;
    int target=5;
   cout<<  binary_search(a,first,last,target);
}
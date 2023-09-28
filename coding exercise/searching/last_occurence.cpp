#include<iostream>

using namespace std;

int binary_search(int a[],int f,int l,int t)
{
    int ams=0;
    while (f<=l)
    {
        int mid=f+l/2;
    if(a[mid]==t)
   {
        ams=mid;
        f=mid+1;


        
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
    return ams;
    
   

}

int main()
{
    int a[]={1,1 ,3,3,5,5,7};
    int first=1;
    int last=7;
    int target=1;
   cout<<  binary_search(a,first,last,target);
}
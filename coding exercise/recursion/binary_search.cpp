#include<iostream>
using namespace std;

bool binarysearch(int a[],int first,int last,int target)
{
    int mid=first+(last-first)/2;

    if(a[mid]==a[target]){
        return true;
    }
    if(a[(first+last)/2<a[mid]])
    {
        return false;
    }
    if(a[mid]>target)
    {
       bool t= binarysearch(a,first,mid-1,target);
       return t;
    }
    else
    {
        bool t= binarysearch(a,mid+1,last,target);
       return t;

    }
 
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int first=0;
    int last=7;
    int target=50;
   bool b= binarysearch(a,first,last,target);
   if(b){
    cout<<"found"<<endl;

   }
   else
   {
    cout<<"not found"<<endl;
   }

}
#include<iostream>
using namespace std;


bool nearly_sorted(int arr[],int n,int target)
{
    int s=0;
    int e=n-1;
    int mid= (s+e)/2;


    while(s<=e)
    {
        if(mid-1>=0 && arr[mid-1]==target)
        {
            return  true;
        }

        if(arr[mid]==target)
        {
            return true;
        }

        if(arr[mid+1]==target)
        {
            return true;
        }

        else if(target > arr[mid])
        {
            s=mid+2;
        }
        else
        {
            e=mid-2;
        }
        mid= (s+e)/2;
    }
    return false;
}





int main()
{
    int arr[]={20};
    int n=7;
    int target=20;

    bool ans=nearly_sorted(arr,n,target);

    if(ans==true)
    {
        cout<<"elements are found"<<endl;
    }
    else{
        cout<<"elements are not found"<<endl;
    }


}
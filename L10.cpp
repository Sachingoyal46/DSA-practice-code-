#include<iostream>
using namespace std;

int firstocc(int arr[],int sixe,int key)
{
    int low=0,high=sixe-1;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }

        mid=low+ (high-low)/2;
    }
    return ans;
}


 int lastocc(int arr[],int sixe,int key)
{
    int low=0,high=sixe-1;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high)
    {
        if(arr[mid]==key)
        {
            ans=mid;
           low=mid+1;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }

        mid=low+ (high-low)/2;
    }
    return ans;

}

int main()
{
    int even[8]={1,2,2,2,5,6,7,8};
    cout<<"firstocc"<<firstocc(even,8,2)<<endl;
    cout<<"lastocc"<< lastocc(even,8,2)<<endl;

    return 0;


}
#include<iostream>
using namespace std;


int binarysearch(int arr[],int size,int key)
{
    int low=0;
    int high=size-1;

    int mid=low + (high-low)/2;


    while(low<=high)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        else if(key>arr[mid])
        {
            low=mid+1;

        }

        else
        {
            high=mid-1;
        }

        mid= low+(-low+high)/2;
    }
    return -1;
}


int main()
{

    int even[6]={2,4,6,8,9,11};
    int odd[5]={3,4 ,5,6,7};

    int index=binarysearch(even,6,2);
    cout<<"index of 11 is"<<index<<endl;






}
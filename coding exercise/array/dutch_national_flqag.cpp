#include<iostream>

using namespace std;

int main()
{
    int arr[]={3,-2,4,-4,6,7,8,-3};

    int n=8;

    int low=0;
    int high=n-1;

    while(low<=high)
    {
        if(arr[low]<0)
        {
            low++;
        }

        else if(arr[high]>0)
        {
            high--;
        }
        else
        {
            swap(arr[low],arr[high]);
        }
    }

    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }

}
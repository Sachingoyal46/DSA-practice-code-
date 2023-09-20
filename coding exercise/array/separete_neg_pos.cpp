#include<iostream>
#include<vector>

using namespace std;

int main()

// two pointer approach
{
    int arr[]={23,-7,12,-10,0,40,60};
    int n=7;

    int index=0;
    int j=0;

    while(index<n)
    {
        if(arr[index]>=0)
        {
            index++;
        }
        else if(arr[index]<0)
        {
            swap(arr[j],arr[index]);
            index++;
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    

    }

#include<iostream>
using namespace std;

int main()
{
    // int arr[]={10,20,30,40,50};
    // int n=5;
    // int temp=arr[4];

    // for(int i=n-1;i>=1;i--)

    // {
    //     arr[i]=arr[i-1];
    // }
    // arr[0]=temp;

    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i] ;
    // }

    // shift right side by 2
     int arr[]={10,20,30,40,50};
    int n=5;
    int temp=arr[4];
    int temp1=arr[3];

    for(int i=n-1;i>=2;i=i-2)

    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp1;
    arr[1]=temp;

    for(int i=0;i<5;i++)
    {
        cout<<arr[i] ;
    }




}
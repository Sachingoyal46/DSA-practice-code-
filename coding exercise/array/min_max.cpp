#include<iostream>
#include<limits.h>
using namespace std;


// int max(int arr[],int size)
// {int max=0;
//     for(int i=0;i<size;i++)
//     {   
        
//         if(arr[i]>arr[i+1])
//         {   
//             if(max<arr[i])
//             {
//                 max=arr[i];
//              i++;
//             }
            
//         }
//     }
//     return max;
// }

int find_minimum(int arr[],int size)
{
    int minans=INT16_MAX;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<minans)
        {
            minans=arr[i];
        }
    }
    return minans;
}



int main()
{
    int arr[]={12,303,95,34,23,31,67,74,53,32};
    int size=10;

  int t=  find_minimum(arr,size);
  cout<<t;

}
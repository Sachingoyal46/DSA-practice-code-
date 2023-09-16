#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,1,0,1,1,0,0,0,0};
    int n=9;
    int count_zero=0;
    int count_one=0;
    
    for(int i=0;i<9;i++)
    {
        if(arr[i]==0)
        {
            count_zero++;
        }
        else
        {
            count_one++;
        }
    }
    int i;
    for( i=0;i<count_zero;i++)
    {
        arr[i]=0;
    }
 
    for(int j=0;j<count_one;j++)
    {
        arr[j+i]=1;
    }

    for(int i=0;i<9;i++)
    {
        cout<<arr[i];
    }

    

       
}

#include<iostream>
using namespace std;

int main()
{

    int arr[]={10,12,13};
    int n=3;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<< arr[i]+arr[j]<<" ";
        }
        // pair sum
        cout<<endl;
    }

    cout<<"tripplet"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                cout<<arr[i]<<arr[j]<<arr[k]<<" ";
            }

        }
        cout<<endl;
    }


}
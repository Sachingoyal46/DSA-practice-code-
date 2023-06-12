#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    cout<<"enter the size of arry"<<endl;
    cin>>n;
    cout<<"enter the elemnts"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"original"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;

    int j=0,k=1;
    for(j=0,k=1;j<n,k<n;j+=2,k+=2)
    {
       
        int c=arr[j];
        arr[j]=arr[k];
        arr[k]=c;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }



}
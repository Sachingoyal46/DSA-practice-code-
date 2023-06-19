#include<iostream>
using namespace std;
// bubble sort, selection sort, insertion sort
int main()
{

int arr[6]={2,5,7,3,9,8};
int n=6;
for(int i=1;i<n;i++)
{
    for(int j=0;j<n-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
}
cout<<"bubble sort is"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;

// selection sort

for(int i=1;i<n;i++)
{
    int min=i;

    for(int j=i+1;j<n;j++)
    {
     if(arr[min]>arr[j])
     {
        min=j;
     }
    }
    swap(arr[i],arr[min]);
}

cout<<"selection is"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;

// insertion sort

for(int i=2;i<n;i++)
{
    int k=arr[i];
   int j=i-1;
   while(j>0 && arr[j]>k)
   {
    arr[j+1]=arr[j];
    j--;
   }
   arr[j+1]=k;


}

cout<<"insertion  sort is"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;


}
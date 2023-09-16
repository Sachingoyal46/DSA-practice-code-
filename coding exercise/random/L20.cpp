#include<iostream>
using namespace std;
int main()
{

int arr[5]={1,2,3,4,5};
int n=5;
int s=0,e=4;
while(s<e)
{
    swap(arr[s],arr[e]);
    s++;
    e--;
}




cout<<"reverse"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;

}
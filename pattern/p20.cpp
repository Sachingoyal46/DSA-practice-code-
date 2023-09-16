#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<n-i;k++)
        {
            cout<<" ";
        }
        for(int l=1;l<n-i;l++)
        {
            cout<<" ";
        }
        for(int m=0;m<i+1;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<i+1;k++)
        {
            cout<<" ";
        }
        for(int l=1;l<i+1;l++)
        {
            cout<<" ";
        }
        for(int m=0;m<n-i;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}
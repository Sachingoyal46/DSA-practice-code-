#include<iostream>
using namespace std;


int main()
{

    int n;
    cin>>n;


    

    for(int i=0;i<n;i++)
    { 

        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }

        for(int k=0;k<i+1;k++)
        {
            cout<<" ";
        }

        for(int m=0;m<i;m++)
        {
            cout<<" ";
        }
        for(int r=0;r<n-i;r++)
        {
            cout<<"*";
        }
        cout<<endl;
    }  
       
        for(int i=0;i<n;i++)
    { 

        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }

        for(int k=0;k<n-i;k++)
        {
            cout<<" ";
        }

        for(int m=0;m<n-i-1;m++)
        {
            cout<<" ";
        }
        for(int r=0;r<i+1;r++)
        {
            cout<<"*";
        }
        cout<<endl;
    }  


}
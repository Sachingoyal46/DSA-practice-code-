#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        int p=1;
        for(int k=0;k<i+1;k++)
        {
            cout<<p;
            p++;
        }
    int t=i;
        for(int m=0;m<i;m++)
        {
            cout<<t;
            t--;

            
            
           
        }
        cout<<endl;
    }
}
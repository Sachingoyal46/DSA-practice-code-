#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            cout<<" ";
        }
        int s=1;
        for(int k=0;k<i+1;k++)
        {
            cout<<s;
            s++;
        }
        int t=i;
        for(int n=0;n<i;n++)
        {
            cout<<t;
            t--;
        }
        cout<<endl;
    }
}
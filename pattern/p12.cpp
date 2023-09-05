#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+3-i;j++)
        {
            cout<<"*";
        }

        for(int k=1;k<=2*i+1;k++)
        {
            // cout<<i+1;
            if(k%2==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<i+1;
            }
        }
        for(int m=0;m<n+3-i;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
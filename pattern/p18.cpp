#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+3;j++)
        {
            cout<<"*";
        }
        int s=i+1;
        for(int k=1;k<i;k++)
        {
            if(k%2==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<s;
            }
        }
        for(int m=0;m<n-i+3;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
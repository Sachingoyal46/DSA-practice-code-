#include<iostream>
using namespace std;

int main()
{   
    int n;
    cin>>n;


    for(int i=1;i<=n;i++)
    {   
        int p=1;
        for(int j=1;j<i+1;j++)
        {
            cout<<p;
            p++;
        }
        cout<<endl;
    }
}
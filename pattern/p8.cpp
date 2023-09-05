#include<iostream>
using namespace std;

// 1
// 2*2
// 3*3*3
// 4*4*4*4

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<2*i-1;j++)
        {
         
           if(j%2==1)
           {
            cout<<"*";
           }

           else
           {
            cout<<i;
           }
            
        }
        cout<<endl;
    }
}
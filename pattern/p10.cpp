#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=i;j++)
        {   
           char ch='A' +j -1;
            cout<<ch;
        }
    
            char pkk='A'+i-2;
        for(int k=1;k<i;k++)
        {   
            cout<<pkk;
            pkk--;


   
        }

        
        
             
    cout<<endl;
    }
}
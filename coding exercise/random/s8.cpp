#include<iostream>
using namespace std;


void check(int n)
{
    if(n&1==1)
    {
        cout<<"odd";
    }
    else
    {
        cout<<"even";
    }
}

void prime_count(int n)
{
    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
            
        }
        else
        {   

            flag=0;
        }

        
    }
    if(flag==0)
        {
            cout<<" prime";
        }
        else
        {
            cout<<" not prime";
        }
}

int main()
{
    int n;
    cin>>n;

    check(n);
    prime_count(n);
}
#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }

    else
    {
        if(a>b)
        {
            gcd(a-b,b);
        }
        else
        {
            gcd(b-a,a);
        }
    }
}

int main()
{
    int a=72;
    int b=24;

    int n=gcd(a,b);
    cout<<n<<endl;
    cout<<"lcm is "<<a*b/n;
}
#include<iostream>
using namespace std;

// bool isprime(int n)
// {
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }

//     }
//     return true;
// }

// int main()
// {

// cout<<"enter the number"<<endl;
// int n;
// cin>>n;
// int temp=isprime(n);
// if(temp==1)
// {
//     cout<<"prime"<<endl;
// }
// else
// {
// cout<<"not prime"<<endl;
// }
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
    
    while(a!=b)
    
    {
        if(a>b)
        {
            a=a-b;
        }

        else
        {
            b=b-a;
        }
    }

    return a;
}

int main()
{
    cout<<"enter the two number"<<endl;
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;
}


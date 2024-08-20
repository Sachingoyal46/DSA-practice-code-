#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int decimaltobinary(int num)
{   
    int ans=0;
    int i=0;
    while(num)
    {
        int value=(num&1);
        ans+= value*pow(10,i++);
        num=num>>1;

    }
    return ans;
}

int binarytodecimal(int num)
{
    int ans=0;
    int base=1;
    while(num)
    {
        int value=(num&1);
        ans +=value*base;
        base*=2;
       num/=10;
    }
   
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<"decimal to binary"<<" ";
    int ans=decimaltobinary(n);
    cout<<ans<<endl;

    cout<<"binary to decimal"<<" ";
    int value=binarytodecimal(ans);
    cout<<value<<endl;
}

#include<iostream>
using namespace std;

int getquotient(int divisor,int divident)
{
    int s=0;
    int e=divident;
    int mid=(s+e)/2;
    int ans=-1;


    while(s<=e)
    {
        if(mid*divisor==divident)
        {
            return mid;
        }
        else if(mid*divisor < divident)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return mid;

}





int main()
{
    int divisor=    7;
    int dividend=(-29);

    int ans=getquotient(abs(divisor),abs(dividend));

    if((dividend  <0 && divisor<0) || (dividend>0 && divisor>0))
    {
        cout<<"you ans is"<<ans<<endl;;
    }
    else
    {
        cout<<"your ans is"<<" "<<-ans<<endl;

    }
    
    
}
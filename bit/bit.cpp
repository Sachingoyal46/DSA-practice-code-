#include<iostream>
using namespace std;

void checkbit(int n,int i)
{
    int mask=(1<<i);
    if(n&mask)
    {
        cout<<"bit->1"<<endl;
    }
    else
    {
        cout<<"bit->0"<<endl;
    }
}

void setbit(int n,int i)
{
    int mask=(1<<i);
    n=n| mask;
    cout<<n<<endl;
}

void clearbit(int n,int i)
{
    int mask=~(1<<i);
    n=n&mask;
    cout<<n<<endl;
}

int main()
{
    int n=10;
    int i=1;
    // checkbit(n,i);
    // setbit(n,i);
    clearbit(n,i);

}
#include<iostream>
using namespace std;



// // function declarration
// int add(int a,int b)
// {
//     return a+b;
// }

// int main()
// {

// int a,b;
// cin>>a>>b;
// // function call
// cout<<add(a,b);



int max_number(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            cout<<"the gretest number is"<<a<<endl;
        }
        else
        {
            cout<<"the gretest number is"<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"the gretest number is"<<b<<endl;
        }
        else
        {
            cout<<"the gretest number is"<<c<<endl;
        }
    }
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

   max_number(a,b,c);
   
}


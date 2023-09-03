#include<iostream>
using namespace std;



// bool iseven(int a)

//      if(a%2==0)
//      {
//         cout<<"niumber is even"<<endl;
//      }
//      else
//      {
//         cout<<"number is odd"<<endl;
//      }

// if(a&1)
// {
//     return 0;
// }
// return 1;
// }

// int main()
// {
    // cout<<"enter the valid amount"<<endl;
    // int n;
    // cin>>n;

    // cout<<"enter the notes value";
    // int s;
    // int g,a,p,t,y;
    // cin>>s;

    // switch (s)
    // {
    // case  100:  t=n/100;
    //          cout<<"100 rupees notes are"<<n/100<<endl;
    //     // break;

    // case 50:   g=n-t*100;
    //                  a=g/50;
    //             cout<<"50 rupees notes are"<<a<<endl;
    //             // break; 
    //  case 20:  
    //                  p=g/20;
    //             cout<<"20 rupees notes are"<<p<<endl;
    //             // break; 
    //  case 1:  y= g-20;

    //                 cout<<"1 rupees notes are"<<y/1<<endl;   
    //                 break;                   
    
    // default:
    //     break;
    // }


    // function
    // int a,b;
    // cin>>a>>b;
    // int ans=1;
    // for(int i=1;i<=b;i++)
    // {
    //     ans=ans*a;
    // }
    // cout<<ans;
    // int n;
    // cin>>n;

    // int ans=iseven(n);

    // int factorial(int a)
    // {   
    //     int fact=1;
    //     for(int i=1;i<=a;i++)
    //     {
    //         fact=fact*i;
    //     }
    //     return fact;
    // }

    // int ncr(int n,int r)
    // {
    //     int ans;
    //     int v,s;
    //     v=factorial(n);
    //     s=factorial(r);
        

    //     return ans=v/s*(n-r);
    // }

    // int main()
    // {
    //     cout<<"enter the value of n and the r;"<<endl;
    //     int n,r;
    //     cin>>n>>r;
    //     int value=ncr(n,r);
    //     cout<<"anser is"<<value<<endl;
    // }

//prime number*************************************** 
    // bool isprime(int n)
    // {
    //     int i;
    //     for(i=2;i<n;i++)
    //     {
    //         if(n%i==0)
    //         {
    //             return 0;
          
    //         }
           
    //     }
    //    return 1;
    // }

    // int main()
    // {
    //     int n;
    //     cout<<"enter the number"<<endl;
    //     cin>>n;
    //    bool m= isprime(n);
    //    if(m==0)
    //    {
    //     cout<<"not";
    //    }
    //    else
    //    {
    //     cout<<"prime";
    //    }

    // }


    // int setbit(int a,int b)
    // {

    //     int flag=0;
    //     int count=0;
    //     while(a!=0)
    //     {
    //         int a=a&1;
    //         if(a==1)
    //         {
    //             flag++;

    //         }
    //         a=a>>1;

           
           
    //     }
    //     while(b!=0)
    //     {
    //         int b=b&1;
    //         if(b==1)
    //         {
    //             count++;
    //         }
    //         b=b<<1;
           
    //     }
    //     int ans=flag+count;
    //     return ans;
    // }

    // int main()
    // {
    //     cout<<"enter numbers"<<endl;
    //     int a,b;  
    //     cin>>a>>b;
    //     int d=setbit(a,b);
    //     cout<<"answe is"<<d;

    // }


    int update(int a)

    {
        a-=5;
        return a; 
    }
    int main()
    {
        int a=15;
        update(a);
        cout<<a<<endl;
    }










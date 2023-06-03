#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the valid amount"<<endl;
    int n;
    cin>>n;

    cout<<"enter the notes value";
    int s;
    int g,a,p,t,y;
    cin>>s;

    switch (s)
    {
    case  100:  t=n/100;
             cout<<"100 rupees notes are"<<n/100<<endl;
        // break;

    case 50:   g=n-t*100;
                     a=g/50;
                cout<<"50 rupees notes are"<<a<<endl;
                // break; 
     case 20:  
                     p=g/20;
                cout<<"20 rupees notes are"<<p<<endl;
                // break; 
     case 1:  y= g-20;

                    cout<<"1 rupees notes are"<<y/1<<endl;   
                    break;                   
    
    default:
        break;
    }
}

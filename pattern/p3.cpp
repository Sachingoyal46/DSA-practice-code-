#include<iostream>
using namespace std;

// full pyramid

int main()
{
// diamond
    int n;
    cin>>n;
    int i=0;
    for(int i=0;i<n;i++)
    {   
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
             
        }
    // star
        for(int k=0;k<i+1;k++)
        {
            cout<<"* ";
        }

        cout<<endl;
        
    }
     for(int i=0;i<n;i++)
    {   
        // space
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
             
        }
    // star
        for(int k=0;k<n-i-1;k++)
        {
            cout<<"* ";
        }

        cout<<endl;
        
    }


    


}
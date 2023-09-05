#include<iostream>
using namespace std;

// full pyramid

int main()
{

    int n;
    cin>>n;
    int i=0;

    for(int i=0;i<n;i++)
    {   
        // space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
             
        }
    // star
        for(int k=0;k<=n-i-1;k++)
        {
            cout<<"* ";
        }

        cout<<endl;
        
    }


}
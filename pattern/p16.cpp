#include<iostream>
using namespace std;
// 12345
// 2  5
// 3 5
// 45
// 5

int main()
{   
    int n;
    cin>>n;


    for(int i=1;i<=n;i++)
    {   
        int p=i;
        for(int j=1;j<=n-i+1;j++)
        {
            if(n-i+1==j || i==1 ||j==1)
            {

            cout<< p ;
            p++;
            }
            else
            {
                cout<<" ";
                p++;
            }
        }
        cout<<endl;
    }
}
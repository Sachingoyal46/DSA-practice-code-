#include<iostream>

using namespace std;


void find_missing(int a[],int n)

{
//     for(int i=0;i<n;i++)
//     {
//         int index=abs(a[i]);

//         if(a[index -1]>0)
//         { 
//             a[index-1] *=-1;
//         }
//     }


//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }

//     cout<<endl;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]>0)
//         {
//             cout<<i+1<<" ";
//         }
//     }

// sorting +swapping method

int i=0;

 while(i<n)
{
    int index= a[i] -1;
    if(a[i]!=a[index])
    {
        swap(a[i],a[index]);
    }
    else
    {
        i++;
    }
}

for(int i=0;i<n;i++)
{
    if(a[i]!=i+1)
    {
        cout<<i+1<<" ";
    }
}

}


int main()
{
    int n;
    int a[]={3,3,5,4};

    n=sizeof(a)/sizeof(int);

    find_missing(a,n);
}
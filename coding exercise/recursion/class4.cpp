#include<iostream>
using namespace std;
bool sorted_re(int a[],int n,int index)
{
    if(index>=n){
        return true;

    }
    
    
        if(a[index]>a[index-1])
        {
          bool t=  sorted_re(a,n,index+1);
          return t;
        }
        else
        {
            return false;
        }
    
}

int main()
{
    int a[]={10,20,30,40,80};
    int n=5;
    int index=1;
    bool t=sorted_re(a,n,index);
    cout<<t;
}

#include<iostream>
using namespace std;

void solve(string &ans , int n , int index ,int &i)
{
    if(index>=n)
    {
        return;
    }
    solve(ans,n,index+1,i);
    if(i<=index)
    {
        swap(ans[i],ans[index]);
             i++;
    }
    
    
}
int main()
{
    string ans="sachin";
    int index=0;
    int j=0;
    int n=ans.length();
    solve(ans,n,index,j);
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
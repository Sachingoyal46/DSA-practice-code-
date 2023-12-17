#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s,int &pos,int &data)
{
    if(pos==-1) // base case
    {
        s.push(data);
        return;
        // cout<<"deleting "<<s.top()<<endl;
        // s.pop();
       
    }
    pos--;   // 1 case
    int temp=s.top();
    s.pop();

    solve(s,pos,data);

    s.push(temp);

}

// void solve(stack<int>&s,int &pos,int &ans)
// {
//     if(pos==1) // base case
//     {
//         ans=s.top();
//         // cout<<"deleting "<<s.top()<<endl;
//         // s.pop();
//         return;
//     }
//     pos--;   // 1 case
//     int temp=s.top();
//     s.pop();

//     solve(s,pos,ans);

//     s.push(temp);

// }


int getmiddle(stack<int>&s)
{
    int n=s.size();
    int pos=0;
    if(s.empty())
    {
        return -1;

    }

    else{
        if(n & 1)
        {
            pos=n/2 +1; // odd

        }
        else
        {
            pos=n/2; // even
        }
    }
    int ans=-1;
    solve(s,pos,ans);
    return ans;
}

int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int result=getmiddle(s);
    cout<<result;
 
}
// reverse
// int main()
// {
//     string str="sachin goyal";
//     stack<char>s;

//     for(int i=0;i<str.length();i++)
//     {
//         char ch=str[i];
//         s.push(ch);
//     }
//     while(!s.empty())
//     {
//         cout<<s.top();
//         s.pop();
//     }

// }

#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&st,int element)
{
    // base case
    if(st.empty())
    {
        st.push(element);
        return;
    }

    // 1 case
    int temp=st.top();
    st.pop();

    // recursion
    solve(st,element);

    st.push(temp);  // backtrack

}



int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    int element=40;
    solve(st,element);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
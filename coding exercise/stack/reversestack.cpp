#include<iostream>
#include<stack>
using namespace std;



void insertatbottom(stack<int>&st,int element)
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
    insertatbottom(st,element);

    st.push(temp);  // backtrack

}

void insertelement(stack<int>&st,int &element)
{
    // base
    if(element>st.top() || st.empty())
    {
        st.push(element);
        return;
    }

    int temp=st.top();
    st.pop();

    insertelement(st,element);
    st.push(temp);
}

void reverse(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }

    int temp=s.top();
    s.pop();

    reverse(s);

    insertatbottom(s,temp);

    
}

void sortstack(stack<int>&st)
{
    // base
    if(st.empty())
    {
        return;
    }

    int temp=st.top();
    st.pop();

    sortstack(st);
    insertelement(st,temp);
}
int main()
{
    stack<int>st;

    st.push(9);
    st.push(8);
    st.push(12);
    st.push(5);
     st.push(10);

    //  int element=45;
    //  insertelement(s,element);
    sortstack(st);
     while(!st.empty())
     {
        cout<<st.top()<<" ";
        st.pop();
     }

    // cout<<endl;

    // reverse(s);
    // while(!s.empty())
    // {
    //     cout<<s.top()<< " ";
    //     s.pop();
    // }
}
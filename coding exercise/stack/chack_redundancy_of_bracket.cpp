#include<iostream>
#include<stack>

using namespace std;

bool checkbracket(string str)
{
    int n=str.length();
    stack<char>s;
    for (int i=0;i<n;i++)
    {
        char ch=str[i];
        if(ch=='(' || ch=='*' || ch=='-'|| ch=='+'|| ch=='/')
        {
            s.push(ch);
        }
        else if(ch==')')
        {
            int count=0;
            while(!str.empty() && s.top()=='(')
            {
                if(ch=='*' || ch=='+' || ch=='-' || ch=='/')
                {
                    count++;
                }
                s.pop();

            }
            s.pop();
              if(count==0)
                         {
                         return true;
                              }
        }

    }
    return false;
  



}


int main()
{
    string str="((a+b)*(c+d)))";
    bool temp=checkbracket(str);

    if(temp==true)
    {
        cout<<"redundancy is present"<<endl;
    }
    else
    {
        cout<<"redundancy is not present"<<endl;
    }

    return 0;
}

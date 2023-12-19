#include<iostream>
#include<queue>
using namespace std;


int main()
{
    string s="facfdcad";
    int freq[26]={0};
    queue<int>q;

    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        freq[ch-'a']++;

        q.push(ch);

        while(!q.empty())
        {
            char frontele=q.front();
            if(freq[frontele-'a']>1)
            {
                q.pop();
            }
            else
            {
                cout<<frontele<<" ";
                break;
            }
        }

        if(q.empty())
        {
            cout<<"#"<<" ";
        }
        
    }
}
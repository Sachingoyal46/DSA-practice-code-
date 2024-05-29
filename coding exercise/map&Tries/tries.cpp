#include<iostream>
using namespace std;

class tries
{
    public:
    char ch;
    tries * children[26];
    bool isterminal;

    tries(char ch)
    {
        this->ch=ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        this->isterminal=false;
    }
};

void insert(tries * root,string word)
{
    // base conditiino
    // cout<<"word ->"<<word<<endl;
    if(word.length()==0)
    {
        root->isterminal=true;
        return;
    }
    tries * child;
    char ch=word[0];
    int index=ch-'a';
    if(root->children[index]!=NULL)
    {
        // koi or present hai
        child=root->children[index];
    }
    else
    {
        // null hai
        child=new tries(ch);
        root->children[index]=child;
    }

    // recursion
    insert(child,word.substr(1));

}

bool searchword(tries * root,string word)
{
    // base case
    if(word.length()==0)
    {
        return root->isterminal;
    }

    char ch=word[0];
    int index=ch-'a';
    tries * child;
    if(root->children[index]!=NULL)
    {
        // found
        // simpley traverse
        child=root->children[index];
    }
    else
    {
        return false;
    }

    // recursion 
   bool ans= searchword(child,word.substr(1));
   return ans;

}

void deletion(tries * &root, string word)
{
    // base condiiton
    if(word.length()==0)
    {
        root->isterminal=false;
        return ;
    }

    char ch=word[0];
    int index=ch-'a';
    tries * child;

    if(root->children[index]!=NULL)
    {
        // found hai simly traverse karna hai
        child=root->children[index];
    }
    else
    {
        // not found
        return;
    }

    // recursion
    deletion(child,word.substr(1));
}


int main()
{
    tries * root=new tries('_');
    insert(root,"cater");
    insert(root,"care");
    insert(root,"com");
    insert(root,"lover");
    insert(root,"loved");
    insert(root,"load");
    insert(root,"lov");
    insert(root,"bat");
    insert(root,"cat");
    insert(root,"car");

    cout<<"insertion done"<<endl;
    if(searchword(root,"car"))
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }

    deletion(root,"car");

     if(searchword(root,"car"))
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }




}
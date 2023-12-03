#include<iostream>
using namespace std;


void permutation(string &s,int index)
{
    if(index >=s.length())
    {
        cout<<s<<" ";
        return ;

    }

    for(int i=index;i<s.length();i++)
    {
        swap(s[index],s[i]);
        permutation(s,index+1);
        // backtracking
        swap(s[index],s[i]);

        // if you pass through this by reference then add below swap for nultify the effeft of change 
        
    }
}





int main()
{

    string s="abc";
    int index=0;

    permutation(s,index);
     
}
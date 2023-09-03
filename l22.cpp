#include<iostream>
using namespace std;


char getmaxocccharcter(string s)
{
    int arr[26]={0};

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z')
        {
            number=ch-'a';

        }
        else
        {
            number=ch-'A';
        }
        arr[number]++;
    }

    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
            ans=i;
        }
    }

    char finalans= 'a' +ans;
    return finalans;



}

int main()
{
cout<<"enter string"<<endl;
string s;
cin>>s;
cout<<getmaxocccharcter(s);
}l
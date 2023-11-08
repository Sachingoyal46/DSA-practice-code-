#include<bits/stdc++.h>
using namespace std;


void reverse_fun(char ch[])
{
        int i=0;
        int j=strlen(ch)-1;

        while(i<j)
        {
            swap(ch[i],ch[j]);
            i++;
            j--;
        }

}


void convert_upper(char ch[])
{
    int n=strlen(ch)-1;
    for(int i=0;i<=n;i++)
    {
        ch[i]=ch[i]-'a'+'A';

    }

}

void remove_symbol(char ch[])
{
   
    int j=strlen(ch)-1;
    for(int i=0;i<=j;i++)
    {
        if(ch[i]!='@')
        {
            continue;
        }
        else
        {
            ch[i]=' ';

        }
    }

}

bool palindrome(char ch[])
{
    int i=0;
    int j=strlen(ch)-1;

    while(i<j)
    {
        if(ch[i]==ch[j])
        {
           i++;
           j--;
        }
        else
        {
            return false;
        }
        
    }
    return true;
}



int main()
{
//     char ch[100];

// //     cin>>a;
// //    cout<<a;
//     cin.getline(ch,100);
//     cout<<ch;


        // lenght of string

        // char ch[100];
        // cin.getline(ch,100);
        // int i=0;
        // int count=0;
        // while(ch[i]!='\0')
        // {
        //     count++;
        //     i++;
        // }

        // cout<<count<<endl;

        // cout<<"in- build"<<strlen(ch);


        // reverse of string

        char ch[100];
        cin.getline(ch,100);
      bool t=  palindrome(ch);
      if(t==true)
      {
        cout<<"valid palindrome"<<endl;
      }
      else
      {
        cout<<"not a valid palimdrome"<<endl;
      }


        // remove_symbol(ch);
        // cout<<"remove all symbol "<<ch<<endl;
        // convert_upper(ch);
        // cout<<"upper letter is "<<ch<<endl;
        // reverse_fun(ch);

       
        


}

#include<iostream>
using namespace std;

char lowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;

    }
    else
    {
    char temp=ch-'A' +'a';
    return temp;
    }
}

bool checkpalindrom(char a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        if(lowercase(a[s])!=lowercase(a[e]))
        {   
            return 0;
            break;
        }
        else
        {
            s++;
            e--;
        }
    }

    return 1;
}

void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[])
{

    int count =0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;

}

int main()
{
    char arr[20];

    cout<<"enter your name"<<endl;
    cin>>arr;

    cout<<"your name is ";
    cout<<arr<<endl;

    cout<<"lenght of the name is "<<getlength(arr);
    int n=getlength(arr);

    reverse(arr,n);

    cout<<"reverse name is  "<<arr<<endl;

    cout<<"palindrome"<< checkpalindrom(arr,n);
    



    return 0;


}

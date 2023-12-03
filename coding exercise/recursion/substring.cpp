#include<iostream>
using namespace std;


void findsubstring(string str,string output,int index)
{
    if(index>=str.length())
    {
        cout<<"->"<<output<<endl;
        return ;
    }

    char ch=str[index];
    //  findsubstring(str,output,index+1);
    // output.push_back(ch);
    // findsubstring(str,output,index+1);

    // or
    output.push_back(ch);
     findsubstring(str,output,index +1);

     output.pop_back();
     findsubstring(str,output,index +1);
     
    
}
int main()
{
    string s="abc";
    string output=" ";
    int index=0;
    findsubstring(s,output,index);

}








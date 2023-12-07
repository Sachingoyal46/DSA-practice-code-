#include<iostream>
using namespace std;

class ex{
    private:
    int num;
    char ch;

    public:
    void setmyvalue(int n,char m)
    {
        num=n;
        ch=m;
    }

    void getmyvalue()
    {
        cout<<num<<endl;  // access ony inside the class
        cout<<ch<<endl;
    }

};

int main()
{
    ex a;
    a.setmyvalue(2,3);
    a.getmyvalue();
}
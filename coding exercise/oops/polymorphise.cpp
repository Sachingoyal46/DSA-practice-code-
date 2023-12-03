#include<iostream>
using namespace std;
// polymorphism
// function overloading
// class  A
// {
//     public:

//     int sum(int a,int b)
//     {
//         return a+b;
//     }

//     int sum(int a,int b,int c)
//     {
//         return a+b+c;
//     }

//     int sum(int a, float b)
//     {
//         return a+b;
//     }
// };


// operator overloading

class param
{
        public:
        int val;

        void operator +(param & object2)
        {
            int value1=this->val;
            int value2=object2.val;
            cout<<"difference is "<< value1 - value2;
        }


};


int main()
{
//     A a1;
//    cout<< a1.sum(2,22.f)<<endl;
//    cout<< a1.sum(2,22,2);

    param object1, object2;
    object1.val=7;
    object2.val=2;

    object1 + object2;

}
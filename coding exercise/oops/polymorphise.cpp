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

// class param
// {
//         public:
//         int val;

//         void operator +(param & object2)
//         {
//             int value1=this->val;
//             int value2=object2.val;
//             cout<<"difference is "<< value1 - value2;
//         }


// };


// run time polymorphism 
// function overriding

class animal{
    public:

    void speak()
    {
        cout<<"speaking"<<endl;
    }

    
};

class dog : public animal
{
    public:

    void speak()
    {
        cout<<"bark"<<endl;
    }
};



int main()
{

    // animal a1;
    // a1.speak();

    // dog d1;
    // d1.speak();

    // by dynamically

    // animal *a1=new animal;
    // a1->speak();

    // dog *d1=new dog;
    // d1->speak();


    // animal *a1 =new dog(); /// jo iterable hoga wahi call hoga ish cas mai animal hai thats why if we change use virtual keyword
    // a1->speak(); // up casting

    // dog *d1= (dog*)new animal();  // down casting
    // d1->speak();


//     A a1;
//    cout<< a1.sum(2,22.f)<<endl;
//    cout<< a1.sum(2,22,2);

    // param object1, object2;
    // object1.val=7;
    // object2.val=2;

    // object1 + object2;

}
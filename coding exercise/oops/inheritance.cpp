#include<iostream>
using namespace std;


// example of single inheritance
// class car
// {
//     public:
//     string name;
//     int weight;
//     int age;


//     void speedup()
//     {
//         cout<<"speeding"<<endl;
//     }

//     void breakmaro()
//     {
//         cout<<"break mar di"<<endl;
//     }
// };

// class scorpio : public car
// {

// };

// example of multilevel inheritance

// class fruit
// {
//     public:
//     string name;
//     int size;
// };

// class mango : public fruit
// {
//     public:
//     int sweetlevel;
// };

// class alphanso : public mango
// {
//     public:
//     int price;
// };

//example of multiple

// class A
// {
//     public:
//     int chemistry;

//     A()
//     {
//         chemistry=10;
//     }
// };

// class B
// {
//     public:
//     int chemistry;
//      B()
//      {
//         chemistry=100;
//      }
// };

// class Cat:public A,public B
// {
//     public:
//     int maths;
//     Cat()
//     {
//         maths=1000;
//     }

// };


// example of heirarical

class car
{
    public:
    int size;

    void speed()
    {
        cout<<"badha do speed"<<endl;
    }
};


class scorpio : public car{
    public:
};

class fortuner: public car{
    public:
};



int main()
{   

    scorpio s1;
    s1.speed();
    fortuner f1;
    f1.speed();

    // Cat c1;
    // cout<<c1.A::chemistry <<" " << c1.B::chemistry<<" "  << c1.maths<< endl; // scope resolution operator

    // alphanso a1;
    // cout<<a1.size<< " "<< a1.price <<" " <<a1.sweetlevel<<endl;

//     car c1;
//     c1.breakmaro();
}




// class animal
// {
//     protected :
//     int age;
//     int weight;


//     void eat()
//     {
//         cout<<"this is eating"<<endl;
//     }

// };

// class dog : public animal // inheritance
// {   
//     public:
//     void print()
//     {
//         cout<<this->age;
//     }

// };

// int main()
// {
//     dog d1;

//    d1.print();
// }

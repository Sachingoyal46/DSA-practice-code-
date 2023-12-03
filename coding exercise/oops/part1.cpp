#include<iostream>
using namespace std;

class animal{

    private:
    int weight;

    public:

    // STATEs or propertire
    int age;
    string name;
    int sex;


    // behaviours or methods

    void sleep()
    {
        cout<<"sleep"<<endl;
    }

    void bark()
    {
        cout<<"bark"<<endl;
    }

    // use getter or setter to access the private elemnts

    void setweight(int weight)
    {
       this->weight=weight;

    }

    int getweight()
    {
        return weight;
    }

    // constructor

    animal()
    {
        cout<<"constructor called"<<endl;
    }

    // parameterrised constructor

    animal(int a)
    {
        this->age= a;
        cout<<"parameterrised constructor"<<endl;
    }

    animal(int a, int b)
    {
        this->age=a;
        this->sex=b;
        cout<<"two parameterised constructro called"<<endl;
    }
    animal(int a, string b)
    {
        this->age=a;
        this->name=b;
        cout<<"two parameterised constructro called"<<endl;
    }

    // copy constructor

    animal(animal &obj)
    {
        this->age=obj.age;
        this->weight=obj.weight;
        this->sex=obj.sex;

        cout<<"copy constructor called"<<endl;
    }

    void print()
    {
       cout<< this->age<<" "<< this->name<<" "<< this->sex;
    }


    // distructor

    ~animal()
    {
        cout<<"destructor called";
    }

};

int main()
{
// animal remesh;

// remesh.age=12;
// remesh.name ="sachin goyal";

// class ka object banoo
// cout<<"age of the ramesh "<<remesh.age <<endl;
// cout<<"name of the ramesh "<<remesh.name <<endl;
// remesh.sleep();

//  cout<<"size of the empty class is "<<sizeof(animal)<<endl;

// getter or setter

// remesh.setweight(101);
// cout<<"output "<<remesh.getweight()<<endl;

// dynamically accsee
// animal a(100);

// animal *suresh= new animal(0,"sachin");

// suresh->setweight(102);
// cout<<suresh->getweight()<<endl;

// suresh->sleep();
// suresh->bark();

// animal s=a; // copy constructor
// animal k(s);

// animal p;
// p.age=10;
// p.name="sheru";
// p.sex=2;

// animal q=p;
// p.print();
// q.print();

// p.name[1]='k';
// p.print();

// animal a;
// a.age=10;

animal *s= new animal();
delete s;// manually called


}
#include<iostream>
using namespace std;

// this is encapsulation 
class animal
{

    private:  // for perfect encapsulation
    int age;
    int weight;

    public:

    void eat()
    {
        cout<<"eating"<<endl;
    }

    void setweight(int a)
    {
        this->weight=a;
    }

    int getweight()
    {
        return this->weight;
    }

};


int main()
{

}
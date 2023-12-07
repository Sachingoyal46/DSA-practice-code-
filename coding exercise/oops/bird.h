#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
class bird
{
    public:
    virtual void eat()=0;
    virtual void fly()=0;
    // pure virtual 
};

class sparrow : public bird{
    public:
    void eat(){
        std::cout<<"sparrow is eating\n";

    }

    void fly(){
        std::cout<<"sparrow is flying\n";
    }
};

class pigeon : public bird{
    public:
    void eat(){
        std::cout<<"pigeon is eating\n";

    }

    void fly(){
        std::cout<<"pigein is flying\n";
    }
};

#endif
#include<iostream>
#include"bird.h"
using namespace std;


void birddosomething(bird*&bird){
    bird->eat();
    bird->fly();
}

int main()
{
    bird* bird=new pigeon();
    birddosomething(bird);
}

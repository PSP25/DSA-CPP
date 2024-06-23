// Friend functions and classes
// • Friend functions are global functions
//  • They can access member of a class upon their objects
//  • A class can be declared as friend on another class
//  • All the functions of friend class can access private and protected members of other class
#include <iostream>
using namespace std;

class My
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend void fun();
};

void fun()
{
    My m;
    m.a = 10;
    m.b = 10;
    m.c = 10;
    
}

int main()
{
}
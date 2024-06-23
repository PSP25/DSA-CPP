// to modify the function described in the base class

// Function Overriding
//  • Redefining a function of base class in derived class
//  • Function overriding is used for achieving runtime polymorphism
//  • Prototype of a overrides function must be exactly same as base class function
#include <iostream>
using namespace std;

class Base
{
public:
    void fun()
    {
        cout << "fun of Base " << endl;
    }
};
class Derived : public Base
{
public:
    void fun(int x)
    {
        cout << "fun of Derived " << endl;
    }
};
int main()
{
    Derived d;
    // d.fun();

    //now if we give a parameter to the fun(int x) then it is not overriding,but overload
    //try running these commands after giving parameter to fun()
    //1.
    //  d.fun();
    // 2.
    //  d.fun(10);
    //3
    // d.Base::fun();
}
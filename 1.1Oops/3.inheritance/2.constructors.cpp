// constructors in inheritence
#include <iostream>
using namespace std;
class base
{
public:
    int a=0;
    base()
    {
        cout << "display of base\t" << a << endl;
    }
    base(int y)
    {
        cout << "parameter display of base" << y << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "display of drived non-param" << endl;
    }
    derived(int y)
    {
        cout << "param display of derived " << y << endl;
    }
    // using parameterized constructor of display
    derived(int x, int y) : base(x)
    {
        cout << "param display of derived " <<y<< endl;
    }
};

int main()
{
        //run each line independently
    // derived d; // calls 'base non param' and 'derived non param'

    // derived d(5);    //    calls 'base non param' and 'deri param'
    // derived d(5, 10); //  calls 'base param' and 'deri param'
}
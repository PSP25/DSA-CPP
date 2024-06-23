#include <iostream>
using namespace std;
class Base
{
public:
    void start() { cout << "Base started" << endl; }
};
class Derived : public Base
{
public:
    void start() { cout << "Derived Started" << endl; }
};
int main()
{
    Base *p = new Derived();
    p->start();
}

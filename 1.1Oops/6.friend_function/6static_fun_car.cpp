#include <iostream>
using namespace std;
class innova
{
public:
    
    static int price;
};
int innova::price = 20;
int main()
{
   
    cout <<  innova::price << endl;//know price without buying car

    innova c1;//buy car
    cout<<c1.price;//know price
}
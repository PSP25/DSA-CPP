//INNER CLASS
//classes inside class to create modularity and make bulky classes more functional

//inner classes are exactly like other external classes and can only access the public 
//members of the outer functon
//the object of the inner class must be declared inside the outer class.
//uses: linked list representation

#include<iostream>
using namespace std;

class outer{
    public:
    
    void display(){
        cout<<"outer display";
        in.display1();
    }
    class inner{
        public:
            // int b=20;
            void display1(){
                cout<<"inner class";
            }    
    };
    inner in;
};
int main(){
    outer c;
    c.display();
    outer::inner i;
    i.display1();
}
#include<iostream>
using namespace std;
class complex{
    
    int real;
    int img;
public:
    complex(int r=0,int i=0 ){
        real=r;                         //constructor functions
        img=i;
    };
    /* complex add(complex x){         //addition function
       complex temp;
       temp.real=real+x.real;
       temp.img=img+x.img;
       return temp;
    }; */
complex operator+(complex c){
        complex t;
        t.real=real+c.real;           //operator '+' overloaded
        t.img=img+c.img;
        return t;
    }

                                     //friend operator 
friend complex operator-(complex c1,complex c2);


    complex(complex(&c)){           //copy function
        real=c.real;
        img=c.img;          
    };
    int getR(){
        return real;
    };                              //accesor funtions
    int getI(){
        return img;
    };
friend ostream& operator<<(ostream &anyname,complex c);
};      //class ends
int main(){
    complex c1(10,5);
    complex c2(c1);
    complex c3(5,3),c4;
    c3=c1+c2;
    cout<<c1<<endl;
    cout<<c4<<endl;

}
//code for friend functions are written outside class
complex operator-(complex c1,complex c2){
    complex c3;
    c3.real=c1.real-c2.real;
    c3.img=c1.img-c2.img;           
return c3;
};
ostream& operator<<(ostream &anyname,complex c){
    anyname<<c.getR()<<"+i"<<c.getI()<<endl;
    return anyname;
};
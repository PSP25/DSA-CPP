 #include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"display of base\n";
    }
};

class derived:public base{
    public:
    void show(){
        cout<<"show of derived\n";
    }
};
 
int main(){
    base b;
    b.display();
    derived d;
    d.show();
} 
                                //inheritence basic example
/* #include <iostream>
using namespace std;
class Base
{
public:
 int a;
 void display()
 {
 cout<<"Display of Base "<<a<<endl;
 }
};
class Derived:public Base
{
public:
 void show()
 {
 cout<<"Show of Derived"<<endl;
 }
};
int main()
{
 Derived d;
 d.a=100;
 d.display();
 d.show();
 } */

                                //constructors in inheritenc

/* class base{
    public:
    int a;
     base(){
                cout<<"display of base"<<a<<endl;
    }
     base(int y){
        cout<<"paramet display of base"<<y<<endl;
    }
};


class derived:public base{
    public:
    derived(){
        cout<<"display of drived non-param"<<endl;
        
    };
    derived(int y){
        cout<<"param display of derived"<<y<<endl;
    }
            //using parameterized constructor of display
    derived(int x,int y):base(x){
        cout<<"param display of base "<<x<<end;
    }
    
    };

int main(){
   
    derived d;//calls 'base non param' and 'deri non param'

    derived d(10);//    calls 'base non param' and 'deri param'
    derived d(5,10);//  calls 'base param' and 'deri param'
    

} */


/* class rectangle{
private:
    int length;
    int width;
public:
    rectangle(){length=1;width=1;} //constructors
    rectangle(int l,int w);    
    rectangle(rectangle(&r));   
    void setlength(int l);          //mutatora
    void setwidth(int w);
    int getlength(){return length;} //accessors
    int getwidth(){return width;}
    int ar();                       //functions
    int peri();
    ~rectangle(){cout<<"rectangle destroyed\n";};
};

                        //derived class
class cuboid:public rectangle{
    int height;
public:
    cuboid(int h){height=h;};
    void setheight(int h=0){height=h;};
    int getheight(){return height;}
    int vol(){return ar()*getheight();}

};

int main(){
    cuboid c(5);
    c.setlength(10);
    c.setwidth(7);

    cout<<c.vol()<<endl;

}

void rectangle::setlength(int l){
    length=l;
}
void rectangle::setwidth(int w){
    width=w;
}
int rectangle::ar(){
    return length*width;
}
int rectangle::peri(){
    return 2*(length+width);
}
rectangle::rectangle(int l,int w){
    setlength(l);
    setwidth(w);
}
rectangle::rectangle(rectangle(&r)){
    this->length=r.length;
    this->width=r.width;
} */




                                //bari sir's code
/* class Rectangle
{
private:
 int length;
 int breadth;
public:
 Rectangle();
 Rectangle(int l,int b);
 Rectangle(Rectangle &r);
 int getLength(){return length;}
 int getBreadth(){return breadth;}
 void setLength(int l);
 void setBreadth(int b);
 int area();
 int perimeter();
 bool isSquare();
 ~Rectangle();
}; 
class Cuboid:public Rectangle
{
private:
 int height;
public:
 Cuboid(int h)
 {
 height=h;
 }
 int getHeight(){return height;}
 void setHeight(int h){height=h;}
 int volume(){return getLength()*getBreadth()*height;}
};
int main()
{
 Cuboid c(5);
 c.setLength(10);
 c.setBreadth(7);
 cout<<"Volume is "<<c.volume()<<endl;
}
Rectangle::Rectangle()
{
 length=1;
 breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
 length=l;
 breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
 length=r.length;
 breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
 length=l;
}
void Rectangle::setBreadth(int b)
{
 breadth=b;
}
int Rectangle::area()
{
 return length*breadth;
}
int Rectangle::perimeter()
{
 return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
 return length==breadth;
}
Rectangle::~Rectangle()
{
  cout<<"Rectangle Destroyed"; } */


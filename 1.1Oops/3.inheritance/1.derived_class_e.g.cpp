 #include<iostream>
using namespace std;
// class base{
//     public:
//     void display(){
//         cout<<"display of base\n";
//     }
// };

// class derived:public base{
//     public:
//     void show(){
//         cout<<"show of derived\n";
//     }
// };

// int main(){
//     base b;
//     b.display();
//     derived d;
//     d.show();
// }


                        // rectancle and cuboid
 class Rectangle
{
private:
 int length;
 int breadth;
public:
 Rectangle();
 Rectangle(int l){length=l;};
 Rectangle(int l,int b);
 Rectangle(Rectangle &r);//copy
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
 Cuboid c(5);//understand constructors to get better idea, why it went to height and not others
 cout<<c.getBreadth()<<endl;
 cout<<c.getLength()<<endl;
 cout<<c.getHeight()<<endl;


 c.setLength(10);
 c.setBreadth(7);
 cout<<c.getLength()<<endl;
cout<<c.getBreadth()<<endl;
 cout<<c.getHeight()<<endl;
 cout<<"Volume is "<<c.volume()<<endl;

}

//constructors
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

//member function
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
  cout<<"Rectangle Destroyed"; } 

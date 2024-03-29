#include<iostream>
using namespace std;


                                            //declsaring a class
/* class rectangle{public:
    int l;
    int b;
    int ar(){
        return l*b;
    };
    int peri(){
        return 2*(l+b);
    };
};

void main(){
    rectangle r1,r2;
    r1.l=25;
    r1.b=24;
    cout<<r1.ar();
    
} */




                                        //pointer to an object
/* class rectangle{
    public:
    int length;
    int breadth;
    int arr()
    {return length*breadth;};
    int perimeter()
    {return 2*(length+breadth);};
};
int main(){
    rectangle r1,*p;
    p=&r1;
    p->length=20;
    p->breadth=15;
    cout<<p->arr();
} */

                                        //data hiding,setlength,width,accesor,mutator
/* class rectangle{
    int length;
    int width;
public:

   void setLength(int l){
    cout<<"enter the length:\n";
    cin>>l;
    if(l>=0)
    length=l;
    else length=0;
    };
   void setwidth(int w){
    cout<<"enter width:\n";
    cin>>w;
    if(w>=0)
    width=w;
    else width=0;
    };

   int getL(){
    return Length;
   };
   int getW(){
    return width;
   }  
    
}; */



                                    //constructor parameterized,nonparameterized,copy constructor
/* class rectangle{
    int length;
    int width;
public:

void setlength(int l){
    if(l>=0)
    length=l;
    else length=0;
    };
void setwidth(int w){
    if(w>=0)
    width=w;
    else width=0;
    };

int getL(){
    return length;
   };
int getW(){
    return width;
   };     
      

                                 //non parameterized constructor 
    rectangle(){                        
        length=0;                       
        width=0;                        
    }

                                 //parameterized                 //
    rectangle(int l,int b){             //rectangle(int l=0,int b=0){
        setlength(l);                   //  setlength(l); **this eliminates the use of non-     
        setwidth(b);                    //   setwidth(b);}      parameterized constructors
    }


        //copy constructor
    rectangle(rectangle(&r)){
      this->length=r.length;
        this->width=r.width;
    }
};
int main(){
    rectangle r;
    cout<<r.getL()<<endl;
    cout<<r.getW()<<endl;
    rectangle r1(10,5);
    cout<<r1.getL()<<endl;
    cout<<r1.getW()<<endl;
    rectangle r2(r1);//coping rectangle r into r2
    cout<<r1.getL()<<endl;
    cout<<r1.getW()<<endl;
} */


                                                //deep copy contructor

/* class test{public:
    int a;
    int *p;
test(int x=6){
    a=x;
    p= new int[5];};

test(test(&t)){
a=t.a;          //test coping code
 //p=t.p;           //this just gives address to new ponter doesnt 
                //creates a new array
p= new int[5];                
};
}; */



                                    //this poiner








                                    

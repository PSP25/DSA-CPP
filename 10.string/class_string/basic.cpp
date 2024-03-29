#include<bits/stdc++.h>
using namespace std;
int main(){
    //class string
    string s="hello";
    cout<<s;
        cout<<endl<<"%%\tnext set of functions\t%%"<<endl;

//user input;
    string s1;
    string s2;
    string s3;

    cin>>s1;
    cout<<s1<<endl;
    cin>>s2;
    cout<<s2<<endl;

    getline(cin,s3);
    cout<<s3<<endl;
        cout<<endl<<"%%\tnext set of functions\t%%"<<endl;

// basic functions
    
    cout<<s.length()<<endl;
        cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
        s.resize(30);
    cout<<s.size()<<endl;
        cout<<s.max_size()<<endl; 
    cout<<s.empty()<<endl; 
        s.clear();
    cout<<s.empty()<<endl;
        cout<<endl<<"%%\tnext set of functions\t%%"<<endl;
   
//insert append
    s="hello";
    string s4="qwertyuiopasdfghjkl";
    cout<<s.capacity()<<endl;   //check capacity
    cout<<s.append(s4)<<endl; //append
    cout<<s.capacity()<<endl;   //capacity extended
    s.resize(45);//inserts null chars at the other position
    cout<<s.append(s4)<<endl;
    cout<<endl<<"%%\tnext set of functions\t%%"<<endl;

 //insert function (solves above prblm)
    s.clear();
    s="hello";
    cout<<s.insert(2,s4)<<endl;
    cout<<s.insert(3,"apple",2)<<endl;
    cout<<endl<<"%%\tnext set of functions\t%%"<<endl;

//swap,replace,etc
    s.clear();
    s="hello";
    cout<<s.replace(3,15,"a")<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.push_back('A');
    s.swap(s4);
    cout<<s<<" "<<s4<<endl;
    cout<<endl<<"%%\tnext set of functions\t%%"<<endl;

//copy
    s.clear();
    s="hello";
    char s5[30];
    s.copy(s5,2);
    cout<<s5<<endl;//stores garbage in other places
                //as no null char given;
    cout<<endl<<"%%\tnext set of functions\t%%"<<endl;

//find,rfind
    s5[2]='\0';
    cout<<s5<<endl;

    cout<<s.find('o')<<endl<<s.find("el")<<endl<<s.find("k")<<endl;
        //gives capacity if not found
    cout<<s.rfind('l')<<endl;
    cout<<endl<<"%%\tnext set of functions\t%%"<<endl;
//find_first, find_last
    s.clear();
    s="hello";

    cout<<s.find_first_of('l')<<endl;
    cout<<s.find_last_of('l')<<endl;
    string s6="hellnoi wz saidnomeansno";
    cout<<s6.find_first_of("wz")<<endl;
    cout<<s6.find_last_of("wz")<<endl;
    cout<<s6.find_first_of("wz",10)<<endl;
        //4 is the starting of search
    cout<<endl<<"%%\tnext set of functions\t%%"<<endl;

//substring     s.substr(start,number_of_char)
    s.clear();
    s="hello";
    cout<<s.substr(3)<<endl;
    cout<<s.substr(3,3)<<endl;//as no char left so
                                // only 2 are taken not 3
    cout<<endl<<"%%\tnext set of functions\t%%"<<endl;

//operators
    s.clear();
    s="hello";
    cout<<s.at(4)<<endl;
    cout<<s[4]<<endl;
    string s8="";
    s8=s+s8;
    cout<<s8<<endl;


    






}
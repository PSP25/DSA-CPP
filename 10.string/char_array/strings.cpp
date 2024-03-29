#include<iostream>
#include<string>
using namespace std;
int main(){


            //char array
char s[]="hello";
cout<<"<enter"<<endl;
cin.getline(s,10);
cout<<s<<endl;
string str;
cout<<"enter";
getline(cin,str);
cout<<endl<<str; 

//length of a string
string s1="hello";
int i,n;
for(i=0;s1[i]!=0;i++){
    n=i+1;
}
cout<<n; 


//change cases of a string
string s="hello";
for (int i = 0;s[i]!=0; i++)
{
    s[i]=s[i]-32;
    cout<<s[i];
} 

//count no. of vowels,consonants,words
string s="How mAny WordS";
int i,vowels=0,spaces=0,consonants=0;
for(i=0;s[i]!=0;i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||
       s[i]=='I'||s[i]=='O'||s[i]=='U')
        vowels++;
    else if(s[i]==' ')
        spaces++;
    else consonants++;
}
cout<<endl<<"no. of vowels are"<<vowels<<endl;
cout<<"consonants:"<<consonants<<endl;
cout<<"no of words"<<spaces+1<<endl; 

//checking palindrome
 string s="MAMAM";
int i,n=0,key=0;
for(i=0;s[i]!=0;i++){
    n=i+1;
}

 for(i=0;s[i]!=0;i++){
    if(s[i]==s[n-i-1])
        key=1;
    else key=0;
}

if(key==1)
cout<<"yes"<<endl;
else cout<<"no"<<endl; 
 
//finding username from email
string s="priyanshupanda2019@gmail.com";
int i,pos=0;
for(i=0;s[i]!=0;i++){
    if(s[i]=='@')
    pos=i;
}

cout<<"the username is:"<<endl;
for (i=0;i<pos; i++)
cout<<s[i]; 


    return 0;
}
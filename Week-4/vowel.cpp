#include<iostream>
using namespace std;
int main(){ 
char ch;
cout<<"---Character Property Checker---"<<endl;
cout<<"Enter any character: ";
cin>>ch;

if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
    cout<<ch<<" is a vowel."<<endl;
}
else if(ch >= '0' && ch <= '9' ){
    cout<<ch<<" is a number."<<endl;
}
else if((ch >= 'a' &&  ch <= 'z')||(ch >= 'A' &&  ch <= 'Z')) {
     cout<<ch<<" is a consonant."<<endl;
}
else {
    cout<<"This is a special character or symbol!"<<endl;
    }
return 0;
} 
#include<iostream>
using namespace std;
int main(){
int number1,number2;
cout<<"Please enter the first number:";
cin>>number1;
cout<<"Please enter the second number:";
cin>>number2;

if(number1 < number2){
    cout<<"Number2: "<<number2<<" is greater than Number1: "<<number1;
}
else if (number1 > number2){
    cout<<"Number1: "<<number1<<" is greater than Number2: "<<number2;
}
else{
    cout<<"Both numbers are equal!"<<endl;
    }
 return 0;
}
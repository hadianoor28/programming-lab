#include<iostream>
using namespace std;
int main(){
int number1,number2,result;
char op;
cout<<"---Inverse Calculator---"<<endl;
cout<<"Enter first number: ";
cin>>number1;
cout<<"Enter the operator(+, -, /, *): ";
cin>>op;
cout<<"Enter second number: ";
cin>>number2;

if(op == '+'){
    result = number1 - number2;
    cout<<number1<<"-"<<number2<<"="<<result;
}
else if(op == '-'){
    result=number1+number2;
    cout<<number1<<"+"<<number2<<"="<<result;
}
else if(op == '*'){
    if(number2 != 0) {
    result = number1 / number2;
    cout<<number1<<"/"<<number2<<"="<<result;
}
else{
    cout<<"cannot divide by zero!";
    }
}
else if(op == '/'){
    result = number1 * number2;
    cout<<number1<<"*"<<number2<<"="<<result;
}
else{
    cout<<"Invalid operator!";
}
return 0;
} 
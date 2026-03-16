#include<iostream>
using namespace std;
int main(){
    int a,b,num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    a = num1;
    b = num2;

    while(b != 0){
        int next = b;
        b = a % b;
        a = next;

    }
    int gcd = a;
    int lcm = (num1 * num2)/gcd;
    cout<<"GCD of "<<num1<<" and "<<num2<<" is: "<<gcd<<endl;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm<<endl;    
    
    return 0;
}
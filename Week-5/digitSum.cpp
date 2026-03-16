#include<iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout<<"Enter a Number: ";
    cin>>num;
    for(int i = num; i > 0 ; i = i / 10)
    {
        int lastDigit = i % 10;
        sum = sum + lastDigit;
    }
        cout<<"Sum of Digits: "<< sum <<endl;
    }
#include<iostream>
using namespace std;
int main()
{
    int num;
    int digit,count = 0;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<"Enter Digit to find frequency: ";
    cin>>digit;

    while (num > 0)
    {
        if (num % 10 == digit)
        {
           count = count + 1;
        }
        num = num/10;
        
    }
    cout<<"Frequency of "<<digit<<" in "<<num<<" is "<<count<<endl;
    return 0;
}
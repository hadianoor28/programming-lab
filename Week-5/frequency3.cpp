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

    for(int i = num; i > 0; i = i/10)
    {
        if (i % 10 == digit)
        {
           count = count + 1;
        }
        
    }
    cout<<"Frequency of "<<digit<<" is "<<count<<endl;
    return 0;
}
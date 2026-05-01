#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    float num1, num2;
    cout << "Enter the Number1: ";
    cin >> num1;
    cout << "Enter the Number2: ";
    cin >> num2;
    cout <<num1<<" Raised to the power "<<num2<<" is: "<< pow(num1, num2);

    return 0;
}
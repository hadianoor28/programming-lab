#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int num1, num2;
    cout << "Enter the Number1: ";
    cin >> num1;
    cout << "Enter the Number2: ";
    cin >> num2;
    cout << "the Minimum Number of: " <<num1<<" and "<<num2<< min(num1, num2);

    return 0;
}

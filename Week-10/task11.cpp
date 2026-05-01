#include <iostream>
#include <cmath>
using namespace std;
bool identifySymmetry(int num)
{
    int firstDigit = num / 100;
    int lastDigit = num % 10;

    if (firstDigit == lastDigit)
    {

        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int usernum;
    cout << "Enter a three digit Number: ";
    cin >> usernum;

    if (identifySymmetry(usernum))
    {
        cout << "The Number is symmetrical" << endl;
    }
    else
    {
        cout << "The Number is not symmetrical" << endl;
    }

    return 0;
}
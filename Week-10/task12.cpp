#include <iostream>
#include <cmath>
using namespace std;
string identifyType(int num)
{
    int digitFive = num % 10;
    int digitFour = (num / 10) % 10;
    int digitThree = (num / 100) % 10;
    int digitTwo = (num / 1000) % 10;
    int digitOne = (num / 10000) % 10;
    int sum = digitOne + digitTwo + digitThree + digitFour + digitFive;

    if (sum % 2 == 0)
    {

        return "Evenish";
    }
    else
    {
        return "Odish";
    }
}
int main()
{

    int userNum;
    string result;
    cout << "Enter a Five-Digit Number: ";
    cin >> userNum;

    result = identifyType(userNum);
    cout << result << endl;

    return 0;
}
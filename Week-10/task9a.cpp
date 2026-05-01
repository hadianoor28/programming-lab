#include <iostream>
using namespace std;

int function(int num);

int main()
{
    int num, result;
    cout << "Enter the Number: ";
    cin >> num;
    result = function(num);
    cout<<"The result is: "<<result;
    return 0;
}
int function(int num)
{
    int total;
    total = num * 5;
    return total;
}
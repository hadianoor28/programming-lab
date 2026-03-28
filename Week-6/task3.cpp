#include <iostream>
using namespace std;
int main()
{
    int numbers[5];
    cout << "Enter 1st Number: ";
    cin >> numbers[0];
    cout << "Enter 2nd Number: ";
    cin >> numbers[1];
    cout << "Enter 3rd Number: ";
    cin >> numbers[2];
    cout << "Enter 4th Number: ";
    cin >> numbers[3];
    cout << "Enter 5th Number: ";
    cin >> numbers[4];

    cout << "The First element in array is: " << numbers[0] << endl;
    cout << "The Last element in array is: " << numbers[4] << endl;
}
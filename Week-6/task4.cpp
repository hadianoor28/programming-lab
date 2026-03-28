#include <iostream>
using namespace std;
int main()
{
    int numbers[5];
    for(int count = 0; count < 5; count++)
 {
    cout << "Enter Number: ";
    cin >> numbers[count];
 }
    cout << "The First element in array is: " << numbers[0] << endl;
    cout << "The Last element in array is: " << numbers[4] << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int count;
    bool special = true;
    cout << "Enter the size of array: ";
    cin >> count;
    if (count <= 0)
    {
        cout << "Invalid input,Number of elements must be greater than 0." << endl;
        return 0;
    }
    int numbers[count];
    cout << "Enter " << count << " elements of the array: " << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < count; i++)
    {
        if (numbers[i] % 2 == 0 && i % 2 != 0)
        {
            special = false;
        }
        if (numbers[i] % 2 != 0 && i % 2 == 0)
        {
            special = false;
        }
    }
    if (special)
    {
        cout << "The array is special" << endl;
    }
    else
    {
        cout << "The array is not special" << endl;
    }
    return 0;
}
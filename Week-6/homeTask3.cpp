#include <iostream>
using namespace std;
int main()
{
    int count;
    int sum = 0;
    cout << "Enter the number of elements: ";
    cin >> count;
    if (count <= 0)
    {
        cout << "Invalid input.Number of elements must be greater than 0." << endl;
        return 0;
    }
    int numbers[count];
    cout << "Enter " << count << " Numbers, one per line: " << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> numbers[i];
    }
    int largest = numbers[0];
    int smallest = numbers[0];
    for (int i = 1; i < count; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }

        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    cout << "The largest number entered is: " << largest << endl;
    cout << "The smallest number entered is: " << smallest << endl;
    return 0;
}

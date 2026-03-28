#include <iostream>
using namespace std;
int main()
{
    int count;
    float sum = 0;
    cout << "Enter the number of Resistors in series circuit: ";
    cin >> count;
    if (count <= 0)
    {
        cout << "Invalid input.Number of Resistors must be greater than 0." << endl;
        return 0;
    }
    float numbers[100];
    cout << "Enter  " << count << " Numbers, one per line: " << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> numbers[i];
        sum = sum + numbers[i];
    }
    cout << "The total resistance of the series circuit is: " << sum << " ohms" << endl;
    return 0;
}

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
    int even = 0;
    for (int i = 0; i < count; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even = even +1;
        }
    }
    cout << "Total Even Numbers: " << even << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int count1;
    int count2;
    cout << "Enter the number of elements for the first array(must be 2): ";
    cin >> count1;
    if (count1 <= 0)
    {
        cout << "Invalid input.Number of elements must be greater than 0." << endl;
        return 0;
    }
    int arr1[count1];
    cout << "Enter " << count1 << " elements for the first array, one per line: " << endl;
    for (int i = 0; i < count1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the number of elements for the second array: ";
    cin >> count2;
    if (count2 <= 0)
    {
        cout << "Invalid input.Number of elements must be greater than 0." << endl;
        return 0;
    }
    int arr2[count2];
    cout << "Enter " << count2 << " elements for the second array, one per line: " << endl;
    for (int i = 0; i < count2; i++)
    {
        cin >> arr2[i];
    }

    cout << "Resulting array: [" << arr1[0];
    for (int j = 0; j < count2; j++)
    {
        cout << ", " << arr2[j];
    }
    cout << ", " << arr1[1] << "]" << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int count;
    cout << "Enter the number of students: ";
    cin >> count;
    if (count <= 0)
    {
        cout << "Invalid input.Number of elements must be greater than 0." << endl;
        return 0;
    }
    string name[count];
    cout << "Enter the Name of " << count << " students: " << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> name[i];
    }
    string swap;
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (name[i] > name[j])
            {
                swap = name[i];
                name[i] = name[j];
                name[j] = swap;
            }
        }
    }
    cout << "Students in alphabatical order:" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << name[i] << endl;
    }
}
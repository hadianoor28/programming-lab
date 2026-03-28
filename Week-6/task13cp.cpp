#include <iostream>
using namespace std;
int main()
{
    int count;
    bool special = true;
    cout << "Enter the number of chords: ";
    cin >> count;
    if (count <= 0)
    {
        cout << "Invalid input,Number of elements must be greater than 0." << endl;
        return 0;
    }
    string chords[count];
    cout << "Enter " << count << " chords, one per line: " << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> chords[i];
    }

    for (int i = 0; i < count; i++)
    {
        string jazzify = chords[i];
        if (jazzify[jazzify.length() - 1] != '7')
        {
            chords[i] = jazzify + "7";
        }
    }
    cout << "Jazzified chord: [";
    for (int i = 0; i < count; i++)
    {
        cout << chords[i];
        if (i < count - 1)
        {
            cout << ",";
        }
    }
    cout << "]" << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    string word;
    char letter;
    bool found = false;
    cout << "Enter a Word: ";
    cin >> word;
    cout << "Enter a Character you want to find: ";
    cin >> letter;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == letter)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << letter << " is found in " << word << endl;
    }
    else
    {
        cout << letter << " is not found in " << word << endl;
    }

    return 0;
}
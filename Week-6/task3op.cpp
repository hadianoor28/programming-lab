#include <iostream>
using namespace std;
int main()
{
    char word[100];
    cout << "Enter a String: ";
    cin >> word;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'z')
        {
            word[i] == 'a';
        }
        else if (word[i] == 'Z')
        {
            word[i] == 'A';
        }
        else
        {
            if (word[i] >= 'a' && word[i] <= 'y' || word[i] >= 'A' && word[i] <= 'Y')
            {
                word[i] = word[i] + 1;
            }
        }
    }
    cout << "Shifted string: " << word << endl;
    return 0;
}
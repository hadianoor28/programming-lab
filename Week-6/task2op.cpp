#include <iostream>
using namespace std;
int main()
{
    string word;
    cout << "Enter a String: ";
    cin >> word;

    cout << "Reversed string: ";

        for (int i = word.length() - 1; i >= 0; i--)
    {
        cout << word[i];
    }
    cout << endl;
    return 0;
}
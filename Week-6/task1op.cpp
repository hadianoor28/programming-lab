#include <iostream>
using namespace std;
int main()
{
    string word;
    cout << "Enter a Word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        cout << word[i] << " found at position " << i << endl;
    }
    return 0;
}
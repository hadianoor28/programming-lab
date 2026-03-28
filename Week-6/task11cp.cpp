#include <iostream>
using namespace std;
int main()
{
    string words;
    string result = "";
    cout << "Enter a string: ";
    getline(cin, words);
    for (int i = 0; i < words.length(); i++)
    {
        char R = words[i];
        if (R != 'a' && R != 'e' && R != 'i' && R != 'o' && R != 'u' && R != 'A' && R != 'E' && R != 'I' && R != 'O' && R != 'U')
        {
           result = result + R;
        }
    }

    cout<<"String with vowels removed: "<<result;
    return 0;
}
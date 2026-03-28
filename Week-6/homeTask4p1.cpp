#include <iostream>
using namespace std;
int main()
{
    string word[5];
    cout << "Enter Names of 5 students: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        getline(cin,word[i]);
    }
    cout << "Students Names are: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << word[i] << endl;
    }
    return 0;
}

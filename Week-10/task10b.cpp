#include <iostream>
#include <cmath>
using namespace std;
string identifyChar(char a)
{
    
   
    if (a == 'A')
    {
       
        return "You have entered Capital A ";

    }
    else
    {
       return "You have entered Small A ";
    }
    
}
int main()
{

    char userChar;
    string result;
    cout << "Enter a character (A/a): ";
    cin >> userChar;
    
    result = identifyChar(userChar);
    cout<<result<<endl;

    
    return 0;
}
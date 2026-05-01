#include <iostream>
#include <string>
using namespace std;

string numConverter(int n)
{

    if (n == 0)
    {
        return "";
    }
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    if (n <= 10)
    {
        return ones[n];
    }

    else if (n < 20)
    {
        return teens[n - 10];
    }
    else
    {
        int tensDigit = n / 10;
        int onesDigit = n % 10;
        return tens[tensDigit] + ones[onesDigit];
    }
}

int main()
{
    int n;
    cout << "Enter a Number (1-99): ";
    cin >> n;

    if (n < 1 || n > 99)
    {
        cout << "Invalid Input! Please enter a Number between 1 and 99." << endl;
    }
    else
    {

        cout << numConverter(n) << endl;
    }
    return 0;
}

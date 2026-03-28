#include <iostream>
using namespace std;
int main()
{
    string coinsName[4] = {"quaters", "dimes", "nickels", "pennies"};
    double coins[4] = {0.25, 0.10, 0.05, 0.01};
    int counts[4];
    double due;
    double owned = 0;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter " << coinsName[i] << ": ";
        cin >> counts[i];
        owned = owned + (counts[i] * coins[i]);
    }
    cout << "Enter the total amount due: $";
    cin >> due;
    cout << "Can you pay the amount? ";
    if (owned >= due)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}

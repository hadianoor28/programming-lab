#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int count;
    cout << "Enter Number of Products: ";
    cin >> count;
    if (count <= 0)
    {
        cout << "Invalid input.Number of elements must be greater than 0." << endl;
        return 0;
    }
    string product[count];
    double price[count];
    int quantity[count];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter the Name of Product " << i + 1 << ": ";
        cin >> product[i];
        cout << "Enter Price of " << product[i] << ": $";
        cin >> price[i];
        cout << "Enter the Quantity of " << product[i] << ": ";
        cin >> quantity[i];

        cout << endl;
    }
    cout << "\nProduct Inventory Report" << endl;
    cout << "--------------------------" << endl;
    cout << fixed << setprecision(2);
    for (int i = 0; i < count; i++)
    {
        double totalvalue = price[i] * quantity[i];
        cout << product[i] << ": $" << price[i] << ", " << quantity[i] << " in stock, " << "Total Value: $" << totalvalue << endl;
    }
    return 0;
}

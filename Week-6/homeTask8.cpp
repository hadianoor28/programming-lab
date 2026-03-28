#include <iostream>
using namespace std;
int main()
{
    int count;
    cout << "Enter Number of Flights: ";
    cin >> count;
    if (count <= 0)
    {
        cout << "Invalid input.Number of elements must be greater than 0." << endl;
        return 0;
    }
    int FlightNum[count];
    string destination[count];
    int seats[count];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter Flight number for flight " << i + 1 << ": ";
        cin >> FlightNum[i];
        cout << "Enter destination for flight " << FlightNum[i] << ": ";
        cin >> destination[i];
        cout << "Enter seats available for flight " << FlightNum[i] << ": ";
        cin >> seats[i];

        cout << endl;
    }
    cout << "\nFlight Information:" << endl;
    cout << "-----------------------------------------" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "Flight " << FlightNum[i] << " to "<<destination[i]<<" has " << seats[i] << " seats available." << endl;
    }
    cout << "\nFlights with less than 5 seats available:" << endl;
    cout << "-----------------------------------------"<< endl;
    bool found = false;
    for (int i = 0; i < count; i++)
    {

        if (seats[i] < 5)
        {
            cout << "Flight " << FlightNum[i] << " to "<<destination[i]<<" has only " << seats[i] << " seats available!" << endl;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "NO flights with less than 5 seats available: " << endl;
    }
    return 0;
}

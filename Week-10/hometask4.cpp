#include <iostream>
#include <string>
using namespace std;
string projectTimeCalculation(int hours, int days, int workers)
{
    double actualDays = days * 0.90;
    int availableHours = actualDays * 10 * workers;

    if (availableHours >= hours)
    {
        int leftHours = availableHours - hours;
        return "Yes! " + to_string(leftHours) + "hours left.";
    }
    else
    {
        int needed = hours - availableHours;
        return "Not Enough Time! " + to_string(needed) + "hours needed.";
    }
}
int main()
{

    int hours, days, workers;
    cout << "Enter Needed Hours: " << endl;
    cin >> hours;
    cout << "Enter number of days of firm: ";
    cin >> days;
    cout << "Enter number of workers: ";
    cin >> workers;

    cout << projectTimeCalculation(hours, days, workers) << endl;

    return 0;
}
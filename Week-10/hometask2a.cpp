#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
string pyramid(double length, double width, double height, string unit)
{
    double volume = (length * width * height) / 3.0;

    if (unit == "milimeters")
    {
        volume = volume * 1000000000.0;
    }
    else if (unit == "centimeters")
    {
        volume = volume * 1000000.0;
    }
    else if (unit == "kilometers")
    {
        volume = volume / 1000000000.0;
    }
    return to_string(volume) + " cubic " + unit;
}
int main()
{

    double length, height, width;
    string unit;
    cout << "Enter length,width,height (in meters): " << endl;
    cin >> length;
    cin >> width; 
    cin >> height;
    cout << "Enter output unit (milimeters,centimeters,kilometers,meters): ";
    cin >> unit;

    
    cout <<fixed<<setprecision(3)<<(length, width, height,unit)  << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
float taxCalculator(char code,float vPrice)
{
    float taxRate = 0;
    if (code == 'M')
    {
       taxRate=6;
    }
    else if (code == 'E')
    {
        taxRate=8;
    }
    else if (code == 'S')
    {
        taxRate=10;
    }
    else if (code == 'V')
    {
        taxRate=12;
    }
    else if (code == 'T')
    {
        taxRate=15;   
    }
    float taxAmount = vPrice * (taxRate/100);
    return vPrice + taxAmount;
}
string vehicleName(char code)
{
if (code == 'M')
    {
       return "Motorcycle";
    }
    else if (code == 'E')
    {
        return "Electric";
    }
    else if (code == 'S')
    {
        return "Sedan";
    }
    else if (code == 'V')
    {
        return "Van";
    }
    else if (code == 'T')
    {
        return "Truck";
    }
}
int main()
{

    char code;
    float vPrice;
    cout << "Enter Vehicle Type Code (M/E/S/V/T): " << endl;
    cin >> code;
    cout << "Enter Vehicle Price: ";
    cin >> vPrice;

    string name = vehicleName(code);
    float price = taxCalculator(code,vPrice);
    
    cout <<"The final Price on a vehicle of type "<<name << " after adding the tax is $"<<price<<endl;

    return 0;
}
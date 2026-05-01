#include <iostream>
#include <cmath>
using namespace std;
void caldiscriminent(double a, double b, double c)
{
    double discriminent = b* b-4*a*c;
   
    if (discriminent > 0)
    {
        double root1=(-b + sqrt(discriminent))/(2*a);
        double root2=(-b - sqrt(discriminent))/(2*a);
        cout<<"Solutions: x = "<<root1<<" and x = "<<root2;

    }
    else if (discriminent == 0)
    {
        double root = -b/(2*a);
        cout<<"Solutions: x = "<<root;
    }
    else
    {
        double realPart= -b/(2*a);
        double imaginaryPart= sqrt(-discriminent)/(2*a);
        
        cout<<"Complex Solutions: x = "<<realPart<<" + "<<imaginaryPart<<"i";
        cout<<" and x = "<<realPart<<" - "<<imaginaryPart<<"i"<<endl;
    }
}
int main()
{

    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    caldiscriminent(a,b,c);
    
    return 0;
}
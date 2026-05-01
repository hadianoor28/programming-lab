#include <iostream>
using namespace std;
int x = 10;
void function()
{
    cout << "The value of the x is: " << x;
    int x = 20;
}
int main()
{
    function();
    int x = 30;
    cout << "The value of the x is: " << x;
    function();
}

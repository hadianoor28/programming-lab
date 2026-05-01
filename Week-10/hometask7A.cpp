#include <iostream>
#include <string>
using namespace std;
float calculateBalance(float balance, int years)
{
    float interest = 0;

    if (balance < 10000)
    {
        interest = 5;
        
    } 
    else if (balance <= 50000)
    {
        interest = 7;
        
    }
    else
    {
        interest = 10;
    }
    if (years>=3)
    {
        interest = interest + 2;
    }
    float interestAmount = balance * (interest / 100);
    return balance + interestAmount;
    

}
int main()
{

    float balance; 
    int years;
    cout << "Enter balance and years: " << endl;
    cin >> balance;
    cin >> years;
    float finalBalance = calculateBalance(balance,years);

    cout <<"Updated Balance: "<<finalBalance << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
float calculateSalary(float base, int score, int experience)
{
    float percentBonus = 0;

    if (score >= 90)
    {
        percentBonus = 20;
        
    } 
    else if (score >= 75)
    {
        percentBonus = 10;
        
    }
    else
    {
        percentBonus = 5;
    }
    if (experience>=5)
    {
        percentBonus = percentBonus + 5;
    }
    float totalBonus = base * (percentBonus / 100);
    return base + totalBonus;
    

}
int main()
{

    float base; 
    int score, experience;
    cout << "Enter base, score and experience in years: " << endl;
    cin >> base;
    cin >> score;
    cin >> experience;
    float finalSalary = calculateSalary(base,score,experience);

    cout <<"Final Salary: "<<finalSalary << endl;

    return 0;
}
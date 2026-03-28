#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    float avg = 0;
    int numbers[5] = {1,2,3,4,5};
    for(int idx = 0; idx < 5; idx++)
 {
    sum = sum + numbers[idx];
 }
 avg = sum/5;
 cout<<"The Sum of first five natural numbers is: "<<sum<<endl;
 cout<<"The Average of first five natural numbers is: "<<avg<<endl;
 

}
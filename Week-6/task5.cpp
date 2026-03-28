#include <iostream>
using namespace std;
int main()
{
    int count;
    cout<<"How many numbers you want to enter: ";
    cin>>count;
    int numbers[count];
    for(int i = 0; i < count; i++)
 {
    cout << "Enter Number: ";
    cin >> numbers[i];
 }
 for(int i = 0; i < count; i++)
 {
    cout << "The number you entered is: "<<numbers[i]<<endl;
 }
   
}
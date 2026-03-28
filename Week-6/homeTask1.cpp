#include <iostream>
using namespace std;
int main()
{
    int count;
    int sum = 0;
    cout<<"Enter the number of elements: ";
    cin>>count;
    if(count <= 0)
    {
        cout<<"Invalid input.Number of elements must be greater than 0."<<endl;
        return 0;
    }
    int numbers[count];
    cout << "Enter "<<count<<" Numbers, one per line: "<<endl;
    for(int i = 0; i < count; i++)
    {
        cin>>numbers[i];
        sum = sum + numbers[i];
    }
    cout<<"Sum of all elemwnts = "<<sum<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int count;
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
    }
    cout<<"Numbers in reverse order: ";
    for(int i = count - 1; i >= 0; i--)
    {
        cout <<numbers[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}
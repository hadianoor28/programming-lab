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
    int unique_num = 0;
    cout << "Enter "<<count<<" Numbers, one per line: "<<endl;
    for(int i = 0; i < count; i++)
    {
        int input;
        cin>>input;
        bool found = false;

        for (int j = 0; j < unique_num; j++)
        {
          if (numbers[j] == input)
          {
            found = true;
            break;
          }
         
        }
        if (found)
        {
            cout<<"Already Entered: "<<input<<endl;
        }
        else
        {
            numbers[unique_num] = input;
            unique_num++;
        }
    }
    cout<<"Unique numbers entered: ";
    for (int i = 0; i < unique_num; i++)
    {
        cout <<numbers[i]<<" ";
    }
cout<<endl;
return 0;
    
}
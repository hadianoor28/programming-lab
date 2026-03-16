#include<iostream>
using namespace std;
int main(){
    int choice;
    double num1,num2;
    for(int i = 1; i <= 6; i++)
    {
        cout<<endl<<"----Simple Calculator----"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Clear Screen"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter Your Choice(1-6): ";
        cin>>choice;
        
        if(choice == 6)
        {
            cout<<"Exiting Calculator."<<endl;  
            break;
        }
        else if(choice == 5)
        {
            cout<<"Screen Cleared."<<endl;  
            continue;
        }
        else if (choice >= 1 && choice <= 4)
        {
            cout<<"Enter First Number: ";
            cin>>num1;
            cout<<"Enter Second Number: ";
            cin>>num2;
            if (choice == 1)
            {
                cout<<"Result: "<<num1+num2<<endl;
            }
            else if(choice == 2)
            {
              cout<<"Result: "<<num1-num2<<endl;  
            }
            else if(choice == 3)
            {
                cout<<"Result: "<<num1*num2<<endl;
            }
            else if(choice == 4)
            {
                if(num2 != 0)
                {
                 cout<<"Result: "<<num1/num2<<endl;
                }
                else
                {
                    cout<<"Error: Division by zero is not allowed!"<<endl;
                }
            }
        }
        else
        {
        cout<<"Invalid Choice"<<endl;
        }
    }
    
return 0;
}
#include<iostream>
using namespace std;
int main(){
    string pin;
    int choice;
    double balance = 1000;
    double amount;
    
    for ( int i = 1; i <= 3 ; i++)
    {
        cout<<"Enter Your ATM PIN: ";
        cin>>pin;

        if (pin == "1234")
        {
            cout<<"Login Successful"<<endl;
            break;
        }
        else{
            cout<<"Wrong PIN"<<endl;
        }
        if (i == 3 && !(pin == "1234"))
        {
            cout<<"Too many attempts. Program Ends!"<<endl;
            return 0;
        }
    }

    for ( int i = 1; i <= 10 ; i++)
    {
        cout<<endl<<"----ATM Management System----"<<endl;
        cout<<"1. Check Balance: "<<endl;
        cout<<"2. Deposit Money: "<<endl;
        cout<<"3. Withdraw Money: "<<endl;
        cout<<"4. Exit "<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;

        if (choice == 1)
        {
            cout<<"Your Current Balance is: $"<<balance<<endl;
        }
        else if(choice == 2)
        {
            cout<<"Enter Amount to Deposit: ";
            cin>>amount;
            balance = balance + amount;
            cout<<"Deposit Successful!"<<endl;
        }
        else if(choice == 3)
        {
            cout<<"Enter Amount to Withdraw: ";
            cin>>amount;
            if (amount <= balance && amount > 0)
            {
                balance = balance - amount;
                cout<<"Withdrawal Successful!"<<endl;
            }
            else
            {
                cout<<"Insufficient Balance!"<<endl;
            }
        }
        else if(choice == 4)
        {
            cout<<"Program Exit";
            break;
        }
        else
        {
            cout<<"Invalid Choice"<<endl;
        }
    }
return 0;
}
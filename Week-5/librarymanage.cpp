#include<iostream>
using namespace std;
int main(){
    int choice;
    string bookName = "";

    for ( int i = 1; i <= 5 ; i++)
    {
        cout<<endl<<"----Library System----"<<endl;
        cout<<"1. Add Book: "<<endl;
        cout<<"2. View Book: "<<endl;
        cout<<"3. Borrow Book: "<<endl;
        cout<<"4. Issue Book"<<endl;
        cout<<"5. EXIT"<<endl;

        cout<<"Enter Choice: ";
        cin>>choice;

        if (choice == 1)
        {
            cout<<"Enter Book Name: ";
            cin>>bookName;
            cout<<"You Added a book: "<<bookName<<endl;
        }
        else if(choice == 2)
        {
            cout<<"Current Book in System: "<<bookName<<endl;
        }
        
        else if(choice == 3)
        {
            cout<<"You have borrowed: "<<bookName<<endl;
        }
        else if(choice == 4)
        {
            cout<<"Book Issued Successfully!"<<endl;
        }
        else if (choice == 5)
        {
            cout<<"Exiting Library System. Goodbye!"<<endl;
            break;
        }
        else
        {
            cout<<"Invalid Choice"<<endl;
        }
    }
return 0;
}
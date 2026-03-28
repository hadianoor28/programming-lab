#include <iostream>
using namespace std;
int main()
{
    int choice;
    string bookName[10];
    int count = 0;

    while (true)

    {
        cout << endl
             << "----Library System----" << endl;
        cout << "1. Add Book: " << endl;
        cout << "2. View Book: " << endl;
        cout << "3. Borrow Book: " << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. EXIT" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (count < 10)
            {
                cout << "Enter Book Name: ";
                cin >> bookName[count];
                cout << "You Added a book: " << bookName[count] << endl;
                count++;
            }
            else
            {
                cout << "Space filled already!" << endl;
            }
        }
        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "No books in the system!" << endl;
            }
            else
            {
                cout << "Current Book in System: " << endl;
                for (int i = 0; i < count; i++)
                {
                   cout << i + 1 << ". " << bookName[i] << endl;
                }
            }
        }
        else if (choice == 3)
        {
            if (count > 0)
            {
                cout << "You have borrowed: " << bookName[count - 1] << endl;
                count--;
            }
            else
            {
                cout << "NO books available to borrow!" << endl;
            }
        }

        else if (choice == 4)
        {
            cout << "Book Issued Successfully!" << endl;
        }
        else if (choice == 5)
        {
            cout << "Exiting Library System. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}

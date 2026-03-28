#include <iostream>
using namespace std;
int main()
{
    string username;
    string correctPass = "1234";
    string correctUser = "hadia";
    string password;

    string studentName[3];
    int studentAge[3];
    string courseName[3];
    int choice;
    int studentNum = 0;
    int courseNum = 0;
    bool login = false;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        if (username == correctUser && password == correctPass)
        {
            login = true;
            cout << "Login Successful" << endl;
            break;
        }
        else
        {
            cout << "Wrong Login" << endl;
        }
    }
    if (login == true)
    {
        while (true)
        {
            
            cout<< "----University Management System----" << endl;
            cout << "1. Add Students: " << endl;
            cout << "2. View Students: " << endl;
            cout << "3. Add Course: " << endl;
            cout << "4. View Courses: " << endl;
            cout << "5. Exit " << endl;
            cout << "Enter Choice: ";
            cin >> choice;

            if (choice == 1)
            {
                if (studentNum < 3)
                {
                    cout << "Enter Student Name: ";
                    cin >> studentName[studentNum];
                    cout << "Enter Student Age: ";
                    cin >> studentAge[studentNum];
                    studentNum++;
                    cout << "Student Added Successfully" << endl;
                }
                else
                {
                    cout << "Only three students allowed." << endl;
                }
            }
            else if (choice == 2)
            {
                for (int i = 0; i < studentNum; i++)
                {
                    cout << i + 1 << ". Student Name: " << studentName[i] << ", Student Age: " << studentAge[i]<<endl;
                }//i is index
                //1 is added to make user friendly.
            }
            else if (choice == 3)
            {
                if (courseNum < 3)
                {
                    cout << "Enter Course Name: ";
                    cin >> courseName[courseNum];
                    courseNum++;
                }
                else
                {
                    cout << "Only three courses allowed." << endl;
                }
            }
            else if (choice == 4)
            {
                cout << "Available Courses: " << endl;
                for (int i = 0; i < courseNum; i++)
                {
                    cout << i + 1 << ". " << courseName[i] << endl;
                }
            }
            else if (choice == 5)
            {
                cout << "EXIT " << endl;
                break;
            }

            else
            {
                cout << "Invalid Choice" << endl;
            }
        }
        //end of while
    } // end of if(login)
    return 0;
}
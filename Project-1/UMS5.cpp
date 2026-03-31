#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int Total_Students = 1000; // total size
    int index = 7;
    

    // data structures
    string nameArray[Total_Students] = {"Khadija", "Minahil", "Ayesha", "Zain", "Bilal", "Sara", "Hamza"};
    int ageArray[Total_Students] = {19, 20, 18, 19, 21, 20, 19};
    float matricArray[Total_Students] = {1050, 890, 1010, 950, 880, 1025, 915};
    float interArray[Total_Students] = {1120, 950, 1080, 1010, 890, 1105, 975};
    float ecatArray[Total_Students] = {350, 280, 310, 290, 260, 330, 275};
    string pref1Array[Total_Students] = {"CS", "CS", "CE", "CS", "CS", "CS", "CS"};
    string pref2Array[Total_Students] = {"CE", "CE", "CS", "EE", "CE", "CE", "CE"};
    string pref3Array[Total_Students] = {"EE", "EE", "EE", "CE", "EE", "EE", "EE"};
    float aggriArray[Total_Students];

    // CRUD Create, Read, Update, Delete
    while (true)
    {

        // main header of ums
        system("cls");
        cout << "--------------------------------------------------------" << endl;
        cout << "---------University Admission Management System---------" << endl;
        cout << "--------------------------------------------------------" << endl;

        cout << "User Menu " << endl;
        cout << "1. Admin " << endl;
        cout << "2. Student " << endl;
        cout << "3. Exit " << endl;
        cout << "Choose option: ";
        string userOption;
        cin >> userOption;

        cout << "You Choose " << userOption << endl;
        if (userOption == "1")
        {

            for (int i = 0; i < 3; i++)
            {

                // write here the admin code
                system("cls");
                cout << "Welcome to UMS Admin Menu : Login Attempt " << i + 1 << endl;
                cout << "Enter Username : ";
                string adminName;
                cin >> adminName;
                cout << "Enter Password : ";
                string password;
                cin >> password;
                if (adminName == "hadia" && password == "123")
                {
                    cout << "Login Successfull!" << endl;
                    cout << "Press any key to continue.." << endl;
                    getch();

                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all students " << endl;
                        cout << "2. Search student " << endl;
                        cout << "3. Update student Record " << endl;
                        cout << "4. Generate Merit List " << endl;
                        cout << "5. Delete student record by name " << endl;
                        cout << "6. Logout " << endl;
                        cout << "Choose the option : ";
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1")
                        {
                            // show student record
                            cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // find student by name function
                            cout << "Enter the name of student you want to saerch : ";
                            string searchName;
                            cin >> searchName;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == searchName)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name " << searchName << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // update student record

                            cout << "Enter the name of student you want to Update record of : ";
                            string updateName;
                            cin >> updateName;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == updateName)
                                {
                                    foundindex = i;
                                    found = true;
                                    break;
                                }
                            }

                            if (found == true)
                            {
                                cout << "------OLD Record------" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter new record for update " << endl;
                                cout << "Enter your Name : ";
                                string name;
                                cin >> name;
                                cout << "Enter Age : ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks : ";
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC Marks : ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter ECAT Marks : ";
                                float ecat;
                                cin >> ecat;

                                cout << "Enter CS, CE, EE as your Preference" << endl;
                                cout << "Enter your First Preference : ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your Second Preference : ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your Third Preference : ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                                cout << "Your data has been saved " << endl;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if (adminOption == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1100.0 * 100.0 * 0.30 + interArray[i] / 1200.0 * 100.0 * 0.4 + ecatArray[i] / 400.0 * 100.0 * 0.3;
                                aggriArray[i] = aggri;
                            }

                            // sorting data on the basis of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {
                                        // 1. Swapping Aggregate
                                        float tempAggr = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempAggr;

                                        // 2. Swapping Name
                                        string tempName = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = tempName;

                                        // 3. Swapping Age
                                        int tempAge = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempAge;

                                        // 4. Swapping Matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // 5. Swapping Inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // 6. Swapping ECAT
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // 7. Swapping Preference 1
                                        string tempP1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempP1;

                                        // 8. Swapping Preference 2
                                        string tempP2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempP2;

                                        // 9. Swapping Preference 3
                                        string tempP3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempP3;
                                    }
                                }
                            } // end of for loop

                            // code to display all data with aggrigate
                            cout << "Name\tAge\tAggrigate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i] << endl;
                                }
                            }

                        } // end of 4th option else if loop

                        else if (adminOption == "5")
                        {
                            // delete student record
                            cout << "Enter the name of student you want to Delete record of : ";
                            string deleteName;
                            cin >> deleteName;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == deleteName)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of " << deleteName << " Deleted" << endl;
                            }
                            else
                            {
                                cout << "Record not Found " << endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "You entered wrong option!" << endl;
                        }

                        cout << "Press any key to continue " << endl;
                        getch();
                    } // end of INNER while loop
                    cout << "Press any key to continue..";
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or Password is invalid! " << endl;
                }
                cout << "Press any key to continue..";
                getch();
            } // end of admin for loop
        } // end of useroption 1

        else if (userOption == "2")
        {
            // write here the Student code
            system("cls");
            cout << "Welcome to UMS Student Menu" << endl;
            cout << "Enter your Name : ";
            string name;
            cin >> name;
            cout << "Enter Age : ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks : ";
            float matric;
            cin >> matric;
            cout << "Enter FSC Marks : ";
            float fsc;
            cin >> fsc;
            cout << "Enter ECAT Marks : ";
            float ecat;
            cin >> ecat;

            cout << "Enter CS, CE, EE as your Preference" << endl;
            cout << "Enter your First Preference : ";
            string pref1;
            cin >> pref1;
            cout << "Enter your Second Preference : ";
            string pref2;
            cin >> pref2;
            cout << "Enter your Third Preference : ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;
            // show how many students record added
            cout << "Your data has been saved " << endl;

            cout << "Press any key to continue..";
            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option!" << endl;
        }
    } // end of main while loop
    cout << endl;
    cout << "Thanks for using this software " << endl;
}
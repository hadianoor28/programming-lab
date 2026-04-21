#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int Total_Donor = 1000; // total size
    int index = 3;
    int history = 3;

    // data structures
    string nameArray[Total_Donor] = {"Khadija", "Minahil", "Ayesha"};
    int ageArray[Total_Donor] = {19, 20, 18};
    float donationArray[Total_Donor] = {5000, 12000, 7500};
    string bloodGroup[Total_Donor] = {"B+", "O-", "A+"};
    string donationType[Total_Donor] = {"Cash", "Blood", "Cash"};
    string contactArray[Total_Donor] = {"03054248010", "03164809972", "03174888015"};
    // History Tracking
    float historyLog[Total_Donor] = {5000, 12000, 7500};

    // CRUD Create, Read, Update, Delete
    while (true)
    {

        // main header of dms
        system("cls");
        cout << "--------------------------------------------------------" << endl;
        cout << "-----------Charity & Donor Management System------------" << endl;
        cout << "--------------------------------------------------------" << endl;

        cout << "1. Admin Login " << endl;
        cout << "2. Donor Portal (Public) " << endl;
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
                cout << "Welcome to DMS Admin Menu : Login Attempt " << i + 1 << endl;
                cout << "Enter Admin Username : ";
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
                        cout << "------ADMIN DASHBOARD-------" << endl;
                        cout << "1. View all Donor Record " << endl;
                        cout << "2. Search Donor by Name " << endl;
                        cout << "3. Update Donor Details " << endl;
                        cout << "4. Remove Donor Record" << endl;
                        cout << "5. Sort Donors by Age " << endl;
                        cout << "6. View Donation History Logs" << endl;
                        cout << "7. Logout " << endl;
                        cout << "Choose the option : ";
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1")
                        {
                            // show student record
                            cout << "Name\tAge\tAmount\tType\tBlood\tContact" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << donationArray[i] << "\t" << donationType[i] << "\t" << bloodGroup[i] << "\t" << contactArray[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // find student by name function
                            cout << "Enter the name of Donor you want to saerch : ";
                            string searchName;
                            cin.ignore();
                            getline(cin, searchName);
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
                                cout << "Name\tAge\tAmount\tType\tBlood\tContact" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << donationArray[foundindex] << "\t" << donationType[foundindex] << "\t" << bloodGroup[foundindex] << "\t" << contactArray[foundindex] << endl;
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // update donor record

                            cout << "Enter the name of Donor you want to Update record of : ";
                            string updateName;
                            cin.ignore();
                            getline(cin, updateName);
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
                                cout << "-----------------OLD Record-----------------" << endl;
                                cout << "Name\tAge\tAmount\tType\tBlood\tContact" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << donationArray[foundindex] << "\t" << donationType[foundindex] << "\t" << bloodGroup[foundindex] << "\t" << contactArray[foundindex] << endl;
                                cout << "--------------------------------------------" << endl;
                                cout << "\nEnter new record for update " << endl;
                                cout << "Enter New Name : ";
                                string name;
                                cin.ignore();
                                getline(cin, name);
                                cout << "Enter New Age : ";
                                int age;
                                cin >> age;
                                cout << "Blood Group : ";
                                string blood;
                                cin >> blood;
                                cout << "Enter New Donation : ";
                                float amount;
                                cin >> amount;

                                cout << "Enter New Contact: ";
                                string contact;
                                cin >> contact;
                                cout << "Enter Donation Type: ";
                                string typeD;
                                cin >> typeD;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                donationArray[foundindex] = amount;
                                bloodGroup[foundindex] = blood;
                                donationType[foundindex] = typeD;
                                contactArray[foundindex] = contact;
                                cout << "Your data has been saved " << endl;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }

                        else if (adminOption == "4")
                        {
                            // delete student record
                            cout << "Enter the name of Donor you want to Delete record of : ";
                            string deleteName;
                            cin.ignore();
                            getline(cin, deleteName);
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
                                donationArray[foundindex] = 0;
                                bloodGroup[foundindex] = "";
                                donationType[foundindex] = "";
                                contactArray[foundindex] = "";
                                cout << "Record of " << deleteName << " Deleted" << endl;
                            }
                            else
                            {
                                cout << "Record not Found " << endl;
                            }
                        }
                        else if (adminOption == "5")
                        {
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)

                                {
                                    if (ageArray[i] > ageArray[j] && nameArray[i] != "")
                                    {

                                        // 1. Swapping Name
                                        string tempName = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = tempName;

                                        // 2. Swapping Age
                                        int tempAge = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempAge;

                                        // 3. Swapping Donation
                                        float tempDonation = donationArray[i];
                                        donationArray[i] = donationArray[j];
                                        donationArray[j] = tempDonation;

                                        // 4. Swapping donation type
                                        string tempDtype = donationType[i];
                                        donationType[i] = donationType[j];
                                        donationType[j] = tempDtype;

                                        // 5. Swapping blood group
                                        string tempBlood = bloodGroup[i];
                                        bloodGroup[i] = bloodGroup[j];
                                        bloodGroup[j] = tempBlood;

                                        // 6. Swapping Contact
                                        string tempContact = contactArray[i];
                                        contactArray[i] = contactArray[j];
                                        contactArray[j] = tempContact;
                                    }
                                }
                            }
                            cout << " Record have been sorted by age successfully!" << endl;
                            cout << "Name\tAge\tAmount\tType\tBlood\tContact" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t"  << donationArray[i] << "\t" << donationType[i] << "\t" << bloodGroup[i] << "\t" << contactArray[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "6")
                        {
                            cout << " ----Transaction Logs----" << endl;
                            for (int i = 0; i < history; i++)
                            {
                                cout << "Log " << i + 1 << ": Amount PKR " << historyLog[i] << endl;
                            }
                        }
                        else if (adminOption == "7")
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
            // write here the user code
            while (true)
            {
                system("cls");
                cout << "----PUBLIC DONOR PORTAL----" << endl;
                cout << "1. Register as New Donor " << endl;
                cout << "2. Search Your Record" << endl;
                cout << "3. Update Your Record " << endl;
                cout << "4. View Available Blood Groups" << endl;
                cout << "5. Back to main menu" << endl;

                cout << "Choice: ";
                string donorOption;
                cin >> donorOption;

                if (donorOption == "1")
                {
                    system("cls");
                    cout << "Enter your Name : ";
                    string name;
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter Age : ";
                    int age;
                    cin >> age;
                    cout << "Blood Group : ";
                    string blood;
                    cin >> blood;
                    cout << "Enter Donation Amount : ";
                    float amount;
                    cin >> amount;
                    cout << "Enter Contact: ";
                    string contact;
                    cin >> contact;
                    cout << "Enter Donation Type: ";
                    string typeD;
                    cin >> typeD;

                    nameArray[index] = name;
                    ageArray[index] = age;
                    donationArray[index] = amount;
                    bloodGroup[index] = blood;
                    donationType[index] = typeD;
                    contactArray[index] = contact;

                    historyLog[history] = donationArray[index];
                    history++;
                    index = index + 1; // show how many students record added
                    cout << "\nThank you for your donation! Record Added. " << endl;
                }
                else if (donorOption == "2")
                {
                    cout << "Enter your Name to saerch : ";
                    string sName;
                    cin.ignore();
                    getline(cin, sName);
                    bool found = false;
                    int foundindex = -1;
                    for (int i = 0; i < index; i++)
                    {
                        if (nameArray[i] == sName)
                        {
                            foundindex = i;
                            found = true;
                            break;
                        }
                    }

                    if (found == false)
                    {
                        cout << "Record not found against name " << sName << endl;
                    }
                    else
                    {
                        cout << "--------------RECORD FOUND--------------" << endl;
                        cout << "Name\tAge\tAmount\tType\tBlood\tContact" << endl;
                        cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << donationArray[foundindex] << "\t" << donationType[foundindex] << "\t" << bloodGroup[foundindex] << "\t" << contactArray[foundindex] << endl;
                    }
                }
                else if (donorOption == "3")
                {
                    cout << "Enter your Name to Update info: ";
                    string uName;
                    cin.ignore();
                    getline(cin, uName);
                    for (int i = 0; i < index; i++)
                    {
                        if (nameArray[i] == uName)
                        {
                            cout << "Enter New Contact: ";
                            cin >> contactArray[i];
                            cout << "Enter New Donation type: ";
                            cin >> donationType[i];
                            cout << "Information Updated Successfully! " << endl;
                        }
                    }
                }
                else if (donorOption == "4")
                {
                    cout << "Current Donors & Blood Groups: " << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (nameArray[i] != "")
                        {
                            cout << "- " << bloodGroup[i] << "(Available via Donor: " << nameArray[i] << " )" << endl;
                        }
                    }
                }
                else if (donorOption == "5")
                {
                    break;
                }
                else
                {
                    cout << "Invalid Option!" << endl;
                }

                cout << "Press any Key to continue..";
                getch();
            }
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
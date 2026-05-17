#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

const int Total_Donor = 1000; // total size
int index = 0;
int history = 0;

// data structures
string nameArray[Total_Donor];
int ageArray[Total_Donor];
float donationArray[Total_Donor];
string bloodGroup[Total_Donor];
string donationType[Total_Donor];
string contactArray[Total_Donor];
string historyName[Total_Donor];

// History Tracking
float historyLog[Total_Donor];

// File Handling Prototype
void saveToFile();
void appendToFile(string name, int age, float amount, string typeD, string blood, string contact);
void appendToHistory(string name, float amount);
void loadFromFile();
string getField(string record, int field);

// Admin prototype
void showHeader();
void pressToContinue();
void viewAllRecord();
void searchByName();
void updateRecord();
void removeRecord();
void sortRecordByAge();
void viewHistoryLogs();
void adminDashboard();
bool adminLogin();

// public prototype
void donorPortal();
void registerNewDonor();
void publicSearch();
void publicUpdate();
void viewAvailableBlood();

int main()
{
    loadFromFile();

    string userOption;
    // CRUD Create, Read, Update, Delete
    while (true)
    {

        // main header of dms
        system("cls");
        showHeader();
        cout << "1. Admin Login " << endl;
        cout << "2. Donor Portal (Public) " << endl;
        cout << "3. Exit " << endl;
        cout << "Choose option: ";
        cin >> userOption;
        cout << "You Choose " << userOption << endl;

        if (userOption == "1")
        {
            if (adminLogin())
            {
                adminDashboard();
            }
        }
        else if (userOption == "2")
        {
            donorPortal();
        }

        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option!" << endl;
            pressToContinue();
        }
    } // end of main while loop
    cout << endl;
    cout << "Thanks for using this software " << endl;
    return 0;
}

//======================================
// FILE HANDLING OPERATION
//======================================

string getField(string record, int field)
{
    int commaCount = 1;
    string word = "";
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount++;
        }
        else if (commaCount == field)
        {
            word = word + record[x];
        }
    }
    return word;
}

//-------------------------------
// WRITE MODE
//-------------------------------

void saveToFile()
{
    fstream donorFile;
    donorFile.open("donor.txt", ios::out);
    if (donorFile)
    {

        for (int i = 0; i < index; i++)
        {
            if (nameArray[i] != "")
            {
                donorFile << nameArray[i] << "," << ageArray[i] << "," << donationArray[i] << "," << donationType[i] << "," << bloodGroup[i] << "," << contactArray[i] << endl;
            }
        }

        donorFile.close();
    }

    fstream historyFile;
    historyFile.open("history.txt", ios::out);
    if (historyFile)
    {

        for (int i = 0; i < history; i++)
        {
            if (historyName[i] != "")
            {
                historyFile << historyName[i] << "," << historyLog[i] << endl;
            }
        }
        historyFile.close();
    }
}

//------------------------------
// APPEND MODE
//------------------------------

void appendToFile(string name, int age, float amount, string typeD, string blood, string contact)
{
    fstream donorFile;
    donorFile.open("donor.txt", ios::app);
    if (donorFile)
    {
        donorFile << name << "," << age << "," << amount << "," << typeD << "," << blood << "," << contact << endl;
        donorFile.close();
    }
}

void appendToHistory(string name, float amount)
{
    fstream historyFile;
    historyFile.open("history.txt", ios::app);
    if (historyFile)
    {
        historyFile << name << "," << amount << endl;
        historyFile.close();
    }
}

//------------------------------
// READ MODE
//------------------------------

void loadFromFile()
{
    string line;
    fstream inFile;
    // read-only mode
    inFile.open("donor.txt", ios::in);
    if (!inFile)
    {
        index = 3;
        history = 3;
        // DONOR 1
        nameArray[0] = "Khadija";
        ageArray[0] = 19;
        donationArray[0] = 5000;
        donationType[0] = "Cash";
        bloodGroup[0] = "B+";
        contactArray[0] = "03054248010";
        historyLog[0] = 5000;
        // DONOR 2
        nameArray[1] = "Minahil";
        ageArray[1] = 20;
        donationArray[1] = 12000;
        donationType[1] = "Blood";
        bloodGroup[1] = "O-";
        contactArray[1] = "03164809972";
        historyLog[1] = 12000;
        // DONOR 3
        nameArray[2] = "Ayesha";
        ageArray[2] = 18;
        donationArray[2] = 7500;
        donationType[2] = "Cash";
        bloodGroup[2] = "A+";
        contactArray[2] = "03174888015";
        historyLog[2] = 7500;

        saveToFile();
        return;
    }

    index = 0;
    while (getline(inFile, line))
    {
        if (line == "" || line.length() < 5)
        {
            continue;
        }

        nameArray[index] = getField(line, 1);
        ageArray[index] = stoi(getField(line, 2));
        donationArray[index] = stof(getField(line, 3));
        donationType[index] = getField(line, 4);
        bloodGroup[index] = getField(line, 5);
        contactArray[index] = getField(line, 6);
        index++;
    }
    inFile.close();
    //===========================================
    //--------- TRANSACTION HISTORY -------------
    //===========================================

    fstream historyFile;
    historyFile.open("history.txt", ios::in);
    history = 0;
    if (historyFile)
    {
        while (getline(historyFile, line))
        {
            if (line != "" && line.length() > 0)
            {
                historyName[history] = getField(line, 1);
                historyLog[history] = stof(getField(line, 2));
                history++;
            }
        }
        historyFile.close();
    }
}

//=============================================
// SYSTEM DASHBOARD & function utility
//=============================================

void showHeader()
{
    cout << "--------------------------------------------------------" << endl;
    cout << "-----------Charity & Donor Management System------------" << endl;
    cout << "--------------------------------------------------------" << endl;
}

void pressToContinue()
{
    cout << "\nPress any key to continue..." << endl;
    getch();
    cin.clear();
}

bool adminLogin()
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
            return true;
        }
        cout << "Username or Password is invalid! ";
        pressToContinue();
    }
    return false;
}

void viewAllRecord()
{
    system("cls");
    cout << "Name\tAge\tAmount\tType\tBlood\tContact" << endl;
    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] != "")
        {
            cout << nameArray[i] << "\t" << ageArray[i] << "\t" << donationArray[i] << "\t" << donationType[i] << "\t" << bloodGroup[i] << "\t" << contactArray[i] << endl;
        }
    }
}

void searchByName()
{
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

void updateRecord()
{
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

        for (int h = 0; h < history; h++)
        {
            if (historyName[h] == nameArray[foundindex])
            {
                historyName[h] = name;
            }
        }

        nameArray[foundindex] = name;
        ageArray[foundindex] = age;
        donationArray[foundindex] = amount;
        bloodGroup[foundindex] = blood;
        donationType[foundindex] = typeD;
        contactArray[foundindex] = contact;

        saveToFile();
        cout << "Your data changes have been tracked and updated inside storage. " << endl;
    }
    else
    {
        cout << "Record not found" << endl;
    }
}

void removeRecord()
{
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
            break;
        }
    }
    if (found == true)
    {
        for (int i = foundindex; i < index - 1; i++)
        {

            nameArray[i] = nameArray[i + 1];
            ageArray[i] = ageArray[i + 1];
            donationArray[i] = donationArray[i + 1];
            bloodGroup[i] = bloodGroup[i + 1];
            donationType[i] = donationType[i + 1];
            contactArray[i] = contactArray[i + 1];
        }
        index--;

        for (int i = 0; i < history; i++)
        {
            if (historyName[i] == deleteName)
            {
                for (int j = i; j < history - 1; j++)
                {
                    historyName[j] = historyName[j + 1];
                    historyLog[j] = historyLog[j + 1];
                }
                history--;
                i--;
            }
        }

        saveToFile();
        cout << "Record of " << deleteName << " Deleted successfully cleared from file tracker." << endl;
    }
    else
    {
        cout << "Record not Found " << endl;
    }
}

void sortRecordByAge()
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
    saveToFile();
    cout << " Record have been sorted by age successfully!" << endl;
    viewAllRecord();
}

void viewHistoryLogs()
{
    cout << " ----Transaction Logs----" << endl;
    for (int i = 0; i < history; i++)
    {
        cout << "Log " << i + 1 << ": Amount PKR " << historyLog[i] << endl;
    }
}

void registerNewDonor()
{
    system("cls");
    if (index >= Total_Donor)
    {
        cout << "System Capacity Warning: Limit Hit! " << endl;
        return;
    }

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

    historyLog[history] = amount;

    appendToFile(name, age, amount, typeD, blood, contact);
    appendToHistory(name, amount);

    // increment counters
    history++;
    index = index + 1; // show how many students record added

    cout << "\nThank you for your donation! Record Added. " << endl;
}

void publicSearch()
{
    searchByName();
}

void publicUpdate()
{
    cout << "Enter your Name to Update info: ";
    string uName;
    cin.ignore();
    getline(cin, uName);
    bool check = false;
    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] == uName)
        {
            cout << "Enter New Contact: ";
            cin >> contactArray[i];
            cout << "Enter New Donation type: ";
            cin >> donationType[i];

            saveToFile();
            cout << "Information Updated Successfully! " << endl;
            check = true;
            break;
        }
    }
    if (!check)
    {
        cout << "No referance matches." << endl;
    }
}

void viewAvailableBlood()
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

void adminDashboard()
{
    string adminOption;
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
        cin >> adminOption;

        if (adminOption == "1")
        {
            viewAllRecord();
        }
        else if (adminOption == "2")
        {
            searchByName();
        }
        else if (adminOption == "3")
        {
            updateRecord();
        }
        else if (adminOption == "4")
        {
            removeRecord();
        }
        else if (adminOption == "5")
        {
            sortRecordByAge();
        }
        else if (adminOption == "6")
        {
            viewHistoryLogs();
        }
        else if (adminOption == "7")
        {
            break;
        }
        pressToContinue();
    }
}

void donorPortal()
{
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
            registerNewDonor();
        }
        else if (donorOption == "2")
        {
            publicSearch();
        }
        else if (donorOption == "3")
        {
            publicUpdate();
        }
        else if (donorOption == "4")
        {
            viewAvailableBlood();
        }
        else if (donorOption == "5")
        {
            break;
        }
        pressToContinue();
    }
}

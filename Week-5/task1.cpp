#include<iostream>
using namespace std;
int main(){
    char choice = 'y';
    while(choice != 'N' && choice != 'n')
    {
        cout<<"I am happy!"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
    }
}
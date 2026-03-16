#include<iostream>
using namespace std;
int main(){
string country_1,ireland;
int ticket_price,money_save;
cout<<"---Discount on Ticket Price---"<<endl;
cout<<"Enter the Name of Country: ";
cin>>country_1;
cout<<"Enter the Ticket Price (in dollars): ";
cin>>ticket_price;

if(country_1 == "ireland" || country_1 == "Ireland" ) {
     money_save = ticket_price * 0.10;
    }
else{
    money_save = ticket_price * 0.05;
    }
     int discounted_price =  ticket_price - money_save;
     cout<<"Discounted Price: "<<discounted_price<<"$"<<endl;

return 0;
} 
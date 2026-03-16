#include<iostream>
using namespace std;
int main(){
float monthly_salary=10000;
float laptop_price=50000;
int months=6;
float advance_month = monthly_salary*0.50;
float advance_sixmonth = advance_month*6;



cout<<"---Laptop Purchase Analysis---"<<endl;

if(advance_sixmonth >= laptop_price){
    cout<<"you can buy laptop now."; 
}
else{
    float money_short=laptop_price-advance_sixmonth;
    int required_month=laptop_price/advance_month;
    cout<<"you cannot buy the laptop."<<endl;
    cout<<"shortage money is: "<<money_short<<endl;
    cout<<"you need "<<required_month<<" months of advance salary to afford the laptop"<<endl;
    
}
}
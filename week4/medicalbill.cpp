#include<iostream>
using namespace std;
int main(){
float bill,discounted_bill,money_save;
cout<<"---Aslam Medical Store(UET)---"<<endl;
cout<<"Please enter your Bill: ";
cin>>bill;


if(bill <= 5000){
    money_save=bill*0.05; 
}
else{
    money_save=bill*0.10;
}
discounted_bill=bill-money_save;
cout<<"Your discounted bill is: "<<discounted_bill<<endl;
return 0;
}
#include<iostream>
using namespace std;
int main(){
float redRose_price = 2.0;
float whiteRose_price =4.10;
float tulips_price = 2.50;
int num_red,num_white,num_tulip;
float original_price,discounted_price=0,money_save=0;
cout<<"------Flower Shop------"<<endl;
cout<<"Enter the Number of Red Rose: ";
cin>>num_red;
cout<<"Enter the Number of White Rose: ";
cin>>num_white;
cout<<"Enter the Number of Tulips: ";
cin>>num_tulip;
original_price = (redRose_price * num_red)+(whiteRose_price * num_white)+(tulips_price * num_tulip);


if(original_price > 200 ) {
    money_save = original_price*0.20;
    discounted_price = original_price - money_save;
    cout<<"Original Price: "<<original_price<<endl;
    cout<<"Price after Discount: "<<discounted_price<<endl;

   }
else{
    cout<<"Original Price: "<<original_price<<endl;
    cout<<"No Discount Offered!"<<endl;
    }

    return 0;
} 
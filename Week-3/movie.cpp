#include<iostream>
using namespace std;
int main() {
	string name;
	int adult_Ticket,child_Ticket ,numA ,numC ;
	int charity;
	float remaining ,totalPrice,percentage_amount; 
	cout<<"Enter the movie name :";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>adult_Ticket;
	cout<<"Enter the child ticket price : $";
	cin>>child_Ticket;
	cout<<"Enter the number of adult ticket sold :";
	cin>>numA;
	cout<<"Enter the number of child ticket sold :";
	cin>>numC;
	cout<<"Enter the percentage of amount to be donated by charity :";
	cin>>percentage_amount;
	totalPrice=(adult_Ticket*numA)+(child_Ticket*numC);
	charity=totalPrice*(percentage_amount/100);
	remaining=totalPrice-charity;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"MOVIE: "<<name<<endl;
	cout<<"Total amount Generated from ticket sales: $"<<totalPrice<<endl;
	cout<<"Donation to charity("<<percentage_amount<<"%) : "<<charity <<endl;
	cout<<"Remaining amount after donation: $"<<remaining<<endl;



	
 	}

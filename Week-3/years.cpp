#include<iostream>
using namespace std;
int main() {
	int moves;
 	double age, average_years; 
	cout<<"Enter your age:";
	cin>>age;
	cout<<"Enter moves:";
	cin>>moves;
	average_years=age/(1+moves);
	cout<<"Average Years = "<<average_years<<endl;
 	}

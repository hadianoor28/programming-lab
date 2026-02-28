#include<iostream>
using namespace std;
int main() {
	int moves;
 	double age, average_years; 
	cout<<"Enter the person's age:";
	cin>>age;
	cout<<"Enter the number of times they have moved:";
	cin>>moves;
	average_years=age/(1+moves);
	cout<<"Average number of years lived in same house= "<<average_years<<endl;
 	}

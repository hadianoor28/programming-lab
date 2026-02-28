#include<iostream>
using namespace std;
int main() {
	int number, digitOne, digitTwo ,digitThree ,digitFour; 
	cout<<"Enter a 4-digit number: ";
	cin>>number;
	digitOne=number%10;
	digitTwo=(number/10)%10;
	digitThree=(number/100)%10;
	digitFour=(number/1000)%10;
	int sum;
	sum=digitOne+digitTwo+digitThree+digitFour;
	cout<<"Sum of the individual digits: "<<sum<<endl;
 	}
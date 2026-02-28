#include<iostream>
using namespace std;
int main() {
	float i, p ,chance; 
	cout<<"Enter imposters: ";
	cin>>i;
	cout<<"Enter players: ";
	cin>>p;
	chance=100*(i/p);
	cout<<"Chance of being an imposter: "<<chance<<"%"<<endl;
 	}
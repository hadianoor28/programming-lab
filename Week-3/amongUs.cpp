#include<iostream>
using namespace std;
int main() {
	float imposter, player ,chance; 
	cout<<"Enter imposter count: ";
	cin>>imposter;
	cout<<"Enter player count: ";
	cin>>player;
	chance=100*(imposter/player);
	cout<<"Chance of being an imposter: "<<chance<<"%"<<endl;
 	}
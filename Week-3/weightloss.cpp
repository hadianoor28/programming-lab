#include<iostream>
using namespace std;
int main() {
	float wloss;
	string name; 
	int requiredDays;
	int days_per_kg=15;
	cout<<"Enter Name of person :";
	cin>>name;
	cout<<"Enter the target weight loss in kilogram :";
	cin>>wloss;
 	requiredDays=wloss*days_per_kg;
	cout<<"Hy "<<name<<","<<endl;
	cout<<"Based on Doctor's recomendation:"<<endl;
	cout<<"You'll need "<<requiredDays<<" days to lose "<<wloss<<" weight by following the Doctor suggestions"<<endl;
 	}

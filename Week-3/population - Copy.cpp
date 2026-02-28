#include<iostream>
using namespace std;
int main() {
	long long currentP, n , FP ,addP;
	const int total_months = 30*12;
	cout<<"Enter the current world population:";
	cin>>currentP;
	cout<<"Enter the monthly birth rate (number of births per month):";
	cin>>n;
	addP=n*total_months;
	FP=addP+currentP;
	cout<<"Total people added: "<<addP<<endl;
	cout<<"Population in three decades will be: "<<FP<<endl;
 	}

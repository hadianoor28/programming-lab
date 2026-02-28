#include<iostream>
using namespace std;
int main() {
	float weight ,cost, area ,price_per_pound ,costSquare ; 
	cout<<"Enter the size of fertilizer bag in pounds :";
	cin>>weight;
	cout<<"Enter the cost of the bag:";
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag :";
	cin>>area;
	price_per_pound=cost/weight;
	costSquare=cost/area;
	cout<<"Cost of fertilizer per pound : $"<<price_per_pound<<endl;
	cout<<"Cost of fertilizer per square foot : $"<<costSquare<<endl;
 	}

#include<iostream>
using namespace std;
int main() {
	string name;
	cout<<"Enter the student name:";
	cin>>name;
	float matric, inter, ecat,agg;
	cout<<"Enter Matriculation marks(out of 1100):";
	cin>>matric;
	cout<<"Enter intermediate marks(out of 550):";
	cin>>inter;
	cout<<"Enter ecat marks(out of 400):";
	cin>>ecat;
	agg=(ecat/400)*50+(inter/550)*40+(matric/1100)*10;
	cout<<"Aggregate score for" <<name<<" is "<<agg<<"%"<<endl;
 	}

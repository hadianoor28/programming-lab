#include<iostream>
using namespace std;
int main() {
	float vI ,vF, acceleration, time; 
	cout<<"Enter initial velocity (m/s):";
	cin>>vI;
	cout<<"Enter Acceleration (m/s^2):";
	cin>>acceleration;
	cout<<"Enter time (s):";
	cin>>time;
	vF=(acceleration*time)+vI;
	cout<<"Final velocity(m/s) = "<<vF<<endl;
 	}

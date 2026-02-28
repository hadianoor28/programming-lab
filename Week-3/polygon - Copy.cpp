#include<iostream>
using namespace std;
int main() {
	int n ,sum ;
	cout<<"Enter sides:";
	cin>>n;
	sum=(n-2)*180;
	if( n>=3)
	cout<<"Sum of angles = "<<sum<<endl;
	else
	  cout<<"NO POLYGON EXIST HAVING LESS THAN 3 SIDES"<<endl;
 	}
	

#include<iostream>
using namespace std;
int main() {
	
	float kb=1024,b=8;
	float mb, result ;
	cout<<"Enter the size in megabytes (MB):";
	cin>>mb;
	result=mb*kb*kb*b;
	cout<<mb<<"MB is equivalent to " <<result<<" bits "<<endl;
 	}

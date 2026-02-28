#include<iostream>
using namespace std;
int main() {
	int n ,width, height, walls; 
	cout<<"Number of square meters you can paint:";
	cin>>n;
	cout<<"Width of the single wall (in meters):";
	cin>>width;
	cout<<"height of the single wall (in meters):";
	cin>>height;
	walls=n/(width*height);
	cout<<"Number of walls you can paint: "<<walls<<endl;
 	}

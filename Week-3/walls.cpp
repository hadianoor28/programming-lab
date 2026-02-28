#include<iostream>
using namespace std;
int main() {
	int paintArea ,width, height, walls; 
	cout<<"Enter paint area:";
	cin>>paintArea;
	cout<<"Enter width:";
	cin>>width;
	cout<<"Enter height:";
	cin>>height;
	walls=paintArea/(width*height);
	cout<<"Walls Painted = "<<walls<<endl;
 	}

#include<iostream>
using namespace std;
int main() {
	int minutes , FPS ,Tframe;
	cout<<"Enter minutes:";
	cin>>minutes;
	cout<<"Enter Frames per sec:";
	cin>>FPS;
	Tframe=minutes*60*FPS;
	cout<<"Total frames = "<<Tframe<<endl;
 	}
	

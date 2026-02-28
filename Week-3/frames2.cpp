#include<iostream>
using namespace std;
int main() {
	int minutes , FPS ,Tframe;
	cout<<"Number of minutes:";
	cin>>minutes;
	cout<<"Frames per seconds:";
	cin>>FPS;
	Tframe=minutes*60*FPS;
	cout<<"Total frames = "<<Tframe<<endl;
}
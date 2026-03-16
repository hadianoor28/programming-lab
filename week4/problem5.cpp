#include<iostream>
using namespace std;
int main(){
int holiDays , days_year=365 , NORM=30000;
int workingDays,games_time,difference;
cout<<"------Tom Sleep Cycle------"<<endl;
cout<<"Enter Holidays: ";
cin>>holiDays;
workingDays = days_year - holiDays;
games_time = (workingDays*63)+(holiDays*127);
int hours , minutes;

if(NORM > games_time) {
   difference = NORM - games_time;
   hours = difference / 60;
   minutes = difference % 60;
   cout<<"Tom sleeps well!"<<endl;
   cout<<hours<<" hours and "<<minutes<<" minutes less for play"<<endl;
    }
else{
   difference = games_time - NORM;
   hours = difference / 60;
   minutes = difference % 60;
   cout<<"Tom will run away!"<<endl;
   cout<<hours<<" hours and "<<minutes<<" minutes for play."<<endl;
   }

return 0;
} 
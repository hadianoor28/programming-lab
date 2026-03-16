#include<iostream>
using namespace std;
int main(){
int temp1,temp2,difference;
cout<<"------Temperature Difference------"<<endl;
cout<<"Enter the Temperature of City 1: ";
cin>>temp1;
cout<<"Enter the Temperature of City 2: ";
cin>>temp2;
if(temp1 > temp2 ) {
   difference = temp1 - temp2;
    }
else{
   difference = temp2 - temp1;
    }
if(difference > 10 ) {
   cout<<"Difference is too Big"<<endl;
    } 
cout<<"Program Ends"<<endl;
    return 0;
} 
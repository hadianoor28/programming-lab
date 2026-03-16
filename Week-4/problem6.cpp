#include<iostream>
using namespace std;
int main() {
double speed;
cout<<"------Speed Checker------"<<endl;
cout<<"Enter the Speed: ";
cin>>speed;

if(speed <= 10 ) {
    cout<<"Slow!"<<endl;
}
else if (speed <= 50){
    cout<<"Average!"<<endl;
}
else if (speed <= 150){
    cout<<"Fast!"<<endl;
}
else if (speed <= 1000){
    cout<<"Ultra Fast!"<<endl;
}
else {
    cout<<"Extremely Fast!"<<endl;
}
    
return 0;
} 
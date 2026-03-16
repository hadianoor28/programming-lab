#include<iostream>
using namespace std;
int main(){
string name1,name2,name3;
int age1,age2,age3;
cout<<"---Age Analysis---"<<endl;
cout<<"Enter Name of first brother: ";
cin>>name1;
cout<<"Enter Age of first brother: ";
cin>>age1; 
cout<<"Enter Name of second brother: ";
cin>>name2;
cout<<"Enter Age of second brother: ";
cin>>age2;
cout<<"Enter Name of third brother: ";
cin>>name3;
cout<<"Enter Age of third brother: ";
cin>>age3;


if(age1 < age2 && age1 < age3 ){
    cout<<name1<<" is the Youngest."<<endl;
}
else if(age2 < age1 && age2 < age3 ){ 
    cout<<name2<<" is the Youngest."<<endl;
}
else if(age3 < age1 && age3 < age2 ){ 
    cout<<name3<<" is the Youngest."<<endl;
}
else {
    cout<<"Multiple brothers share the same youngest age."<<endl;
    }
return 0;
} 
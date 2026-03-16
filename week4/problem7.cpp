#include<iostream>
using namespace std;
int main() {
string shape;
double length,width,radius,base,height,area;
cout<<"------Area Calculator------"<<endl;
cout<<"Enter the type of figure (Square,Triangle,Rectangle,Circle): ";
cin>>shape;

if(shape == "square"  || shape == "Square" ) {
    cout<<"Enter Length of Square: "<<endl;
    cin>>length;
    area = length * length;
    cout<<"The area of Square is: "<<area<<endl;
}
else if(shape == "Rectangle" || shape == "rectangle" ) {
    cout<<"Enter Length and Width of Rectangle: "<<endl;
    cin>>length;
    cin>>width;
    area = length * width;
    cout<<"The area of Rectangle is: "<<area<<endl;
}
else if(shape == "Circle" || shape == "circle" ) {
    cout<<"Enter Radius of circle: "<<endl;
    cin>>radius;
    area = 3.14159265359 * radius * radius;
    cout<<"The area of Circle is: "<<area<<endl;
}
else if(shape == "Triangle" || shape == "triangle" ) {
    cout<<"Enter Base and Height of Triangle: "<<endl;
    cin>>base;
    cin>>height;
    area = 0.5 * base * height;
    cout<<"The area of Triangle is: "<<area<<endl;
}
else{
    cout<<"Invalid Shape!"<<endl;
}
    
return 0;
} 
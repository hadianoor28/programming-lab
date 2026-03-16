#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    cout<<"Sum of First 100 Natural Numbers"<<endl;
    for (int i = 1; i <=100; i++)
    {
        sum = sum + i;
       
    }
    cout<< "Sum: " <<sum;
}
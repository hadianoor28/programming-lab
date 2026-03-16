#include<iostream>
using namespace std;
int main(){
    int count = 0, n ;
    cout<<"Enter the Number: ";
    cin>>n;

    for(int x = n ; x > 0; x = x/10)
    {
        count = count + 1;
    }
    cout<<"Total Number of Digits: "<<count;
    return 0;
}
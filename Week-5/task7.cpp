#include<iostream>
using namespace std;
int main(){
    int n1 = 0;
    int n2 = 1;
    int n,next;
    cout<<"Enter the Length of Fibonacci Series you want to print: ";
    cin>>n;
    cout<<n1<<", ";
    cout<<n2;

    for(int x = 1 ; x < n - 1; x = x + 1)
    {
        next = n1 + n2;
        cout<<", "<<next;
        n1 = n2;
        n2 = next;
    }
}
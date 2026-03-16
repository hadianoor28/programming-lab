#include<iostream>
using namespace std;
int main()
{
    int multiple,table;
    cout<<"Enter a Number: ";
    cin>>table;
    for(int num=1; num<=10; num=num+1){
        multiple=table*num;
        cout<<table<<" * "<<num<<" = "<<multiple<<endl;
    }
    cout<<endl;
}
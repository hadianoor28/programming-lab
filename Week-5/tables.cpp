#include<iostream>
using namespace std;
int main()
{
    int multiple,table;
    table = 24;
    cout<<"Multiplication table of 24:"<<endl;
    for(int num=1; num<=10; num=num+1){
        multiple=table*num;
        cout<<table<<" * "<<num<<" = "<<multiple<<endl;
    }
    cout<<endl;

    table = 29;
    cout<<"Multiplication table of 29:"<<endl;
    for(int num=1; num<=10; num=num+1){
        multiple=table*num;
        cout<<table<<" * "<< num <<" = "<<multiple<<endl;
    }
    cout<<endl;

    table = 50;
    cout<<"Multiplication table of 50:"<<endl;
    for(int num=1; num<=10; num=num+1){
        multiple=table*num;
        cout<<table <<" * "<<num<<" = "<<multiple<<endl;
    }
    return 0;
}
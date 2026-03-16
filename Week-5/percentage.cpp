#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    double count1 = 0,count2 = 0,count3 = 0,count4 = 0,count5 = 0;
    cout<<"Enter a Number Count: ";
    cin>>num1;
    if (num1 <= 0)
    {
        cout<<"Count must be greater than zero."<<endl;
        return 0;
    }
    
    
    for ( int i = 0; i < num1; i++)
    {
        cout<<"Enter a Number: ";
        cin>>num2;

        if (num2 < 200)
        {
            count1 = count1 + 1;
        }
        else if (num2 < 400)
        {
            count2 = count2 + 1;
        }
        else if (num2 < 600)
        {
            count3 = count3 + 1;
        }
        else if (num2 < 800)
        {
            count4 = count4 + 1;
        }
        else
        {
            count5 = count5 + 1;
        }
    }
    double percent1,percent2,percent3,percent4,percent5;
    percent1 = (count1/num1)*100;
    percent2 = (count2/num1)*100;
    percent3 = (count3/num1)*100;
    percent4 = (count4/num1)*100;
    percent5 = (count5/num1)*100;
    cout<<percent1<<"%"<<endl;
    cout<<percent2<<"%"<<endl;
    cout<<percent3<<"%"<<endl;
    cout<<percent4<<"%"<<endl;
    cout<<percent5<<"%"<<endl;
    return 0;
}
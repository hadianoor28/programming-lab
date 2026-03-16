#include<iostream>
using namespace std;
int main(){
    int age,toyPrice,toysNum = 0;
    double moneySaved = 0;
    double nextGift = 10;
    double machinePrice,remaining,shortage;

    cout<<"Enter Lilly's Age: ";
    cin>>age;
    cout<<"Enter the price of the washing machine: ";
    cin>>machinePrice;
    cout<<"Enter the unit price of each toy: ";
    cin>>toyPrice;
    if (age<1 || age>77)
    {
       cout<<"Invalid age!"<<endl;
        return 0;
    }
     if (machinePrice<1 || machinePrice>10000)
    {
       cout<<"Invalid machine price!"<<endl;
        return 0;
    }
     if (toyPrice<0 || toyPrice>40)
    {
       cout<<"Invalid toy price!"<<endl;
        return 0;
    }
    for(int i = 1; i < age; i++)
    {
        if (i % 2 == 0)
        {
           moneySaved = moneySaved + (nextGift - 1);
           nextGift = nextGift + 10;
        }
        else
        {
            toysNum= toysNum + 1;
        }
    }

moneySaved = moneySaved + (toysNum*toyPrice);

if (moneySaved >= machinePrice)
{
    cout<<"YES!"<<endl;
    remaining = moneySaved - machinePrice;
    cout<<"Remaining Amount is: "<<remaining<<endl;
}
else
{
    shortage = machinePrice - moneySaved;
    cout<<"NO!"<<endl;
    cout<<"Insufficient Amount: "<<shortage<<endl;
}
return 0;
}
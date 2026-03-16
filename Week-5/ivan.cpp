#include<iostream>
using namespace std;
int main(){
    int year, ivanAge = 18;
    double inheritance,need;

    cout<<"Enter Inherited Money: ";
    cin>>inheritance;
    cout<<"Enter Year: ";
    cin>>year;
    if (inheritance<1 || inheritance>1000000)
    {
       cout<<"Invalid inherited money!"<<endl;
        return 0;
    }
     if (year<1801|| year>1900)
    {
       cout<<"Invalid Year!"<<endl;
        return 0;
    }
    for(int currentYear = 1800; currentYear <= year; currentYear++)
    {
        if (currentYear % 2 == 0)
        {
           inheritance = inheritance - 12000;
        }
        else
        {
            inheritance = inheritance - (12000+50*ivanAge);
        }
        ivanAge = ivanAge + 1;
    }
if (inheritance >= 0)
{
    cout<<"Yes! He will live a carefree life and will have "<<inheritance<<" dollars left."<<endl;
}
else
{
    need = 0 - inheritance;
    cout<<"He will need "<<need<<" dollars to survive."<<endl;
}
return 0;
}
#include <iostream>
#include <string>
using namespace std;

string calculatePoolState(int V, int P1,int P2 ,float H)
{
    float totalWater = (P1 + P2)* H;
    if (totalWater <= V)
    {
        int poolPercent = (totalWater/V)*100;
        int p1Percent = (P1 * H/totalWater)*100;
        int p2Percent = (P2 * H/totalWater)*100;

        return "The pool is " + to_string(poolPercent) + "% full. Pipe 1: " + to_string(p1Percent) + "%. Pipe 2: " + to_string(p2Percent) + "%.";
    }
    else
    {
        float overflow = totalWater - V;
    
    return "For " + to_string(H) + "hours the pool overflow with " + to_string(overflow) + " Liters.";
    }
}

int main()
{
    int V, P1,P2;
    float H;
    cout << "Enter Volume of the pool in liters: ";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;
    cout<<"Enter hours that the worker is absent: ";
    cin>>H;

    cout << calculatePoolState(V, P1,P2 ,H)<<endl;
    return 0;
}

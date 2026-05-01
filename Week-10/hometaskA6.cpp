#include<iostream>
#include<cmath>
using namespace std;
int findFactorial(int num)
{
    int find = 1;
    for (int i = 1; i <= num; i++)
    {
        find = find * i;
    }
    return find;

}
bool strongNum(int n)
{
    int originalNum = n;
    int sum = 0;
    while (n>0)
    {
        int lastdigit = n % 10;
        sum = sum + findFactorial(lastdigit);
        n = n/10;
    }
    return (sum == originalNum);

}
int main()
{
    int n;
    cin>>n;
    if (strongNum(n))
    {
        cout<<"Strong Number!"<<endl;
    }
    else
    {
        cout<<"Not a Strong Number!"<<endl;
    }
    return 0;

}
#include <iostream>
#include <cmath>
using namespace std;
double calHeight(float distance, float degree)
{
    double radian = degree / 57.2958;
    double height = distance * tan(radian);
    return height;
}
int main()
{
    float distance, angle, height;
    cout << "Enter the distance from the base of the tree (in feet): ";
    cin >> distance;
    cout << "Enter the angle of elevation(in degrees): ";
    cin >> angle;
    height = calHeight(distance, angle);
    cout << "The height of tree is: " << height << endl;
    return 0;
}
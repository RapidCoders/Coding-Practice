/*
Q.1 Write a program which accept radius from user and return the Circumference.

Input : 5
Output : 

Author: Vaibhav
*/

#include <iostream>
#define PI 3.1415f
using std::cin;
using std::cout;
using std::endl;

float Circumference(float radius)
{
    return 2 * PI * radius;
}

int main(void)
{
    float radius;

    cout << "\nEnter the radius: ";
    cin >> radius;

    cout << "\nCircumference of circle is: " << Circumference(radius) << endl;

    return 0;
}

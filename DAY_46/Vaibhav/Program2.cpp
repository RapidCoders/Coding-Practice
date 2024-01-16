/*
Q.2 Write a program to find the area and perimeter of the semicircle.

Input  : 10
Output : Area : 157
         Perimeter : 51.4

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

double area_of_semicircle(double radius)
{
    return (0.5 * (3.14 * (radius * radius)));
}

double perimeter_of_semicircle(double radius)
{
    return ((3.14 * radius) + (2 * radius));
}

int main(void)
{
    int radius;

    cout << "\nEnter the radius: ";
    cin >> radius;

    cout << "\nArea of semicircle is: " << area_of_semicircle(radius) << endl;
    cout << "\nPerimeter of semicircle is: " << perimeter_of_semicircle(radius) << endl;

    return 0;
}

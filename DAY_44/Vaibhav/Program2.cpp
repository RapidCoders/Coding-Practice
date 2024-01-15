/*
Q.2 Write a program to find area of trapezium. First find height of trapezium and then calculate the area.

Input  : a=3, b=4, c=6, d=5, h=6
Output : Area of Trapezium is: 21

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int area_of_trapezium(int base1, int base2, int height)
{
    return 0.5 * (base1 + base2) * height;
}

int main(void)
{
    int base1, base2, height;

    cout << "\nEnter the value of base 1: ";
    cin >> base1;

    cout << "\nEnter the value of base 2: ";
    cin >> base2;

    cout << "\nEnter the height: ";
    cin >> height;

    cout << "\nArea of trapezium is: " << area_of_trapezium(base1, base2, height) << endl;

    return 0;
}

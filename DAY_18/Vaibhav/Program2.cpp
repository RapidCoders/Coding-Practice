/*
Q.2 Write a program to find area of triangle.

Input : Breadth :- 4
        Height :- 13
Output : Area of triangle is 26.

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

float area_of_triangle(float breadth, float height)
{
    return (0.5 * (breadth * height));
}

int main(void)
{
    float breadth, height;

    cout << "\nEnter the breadth: ";
    cin >> breadth;

    cout << "Enter the height: ";
    cin >> height;

    cout << "\nArea of triangle is: " << area_of_triangle(breadth, height) << endl;

    return 0;
}

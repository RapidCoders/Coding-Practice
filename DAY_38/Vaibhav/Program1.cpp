/*
Q.1 Write a program to calculate,
a. area of rectangle
b. perimeter of rectangle
c. check it is square or not

Input:  length = 4.0, breadth = 6.0
Output: Area: 24.0, Perimeter: 20.0, is_square: No.

Input:  length = 7.5, breadth = 7.5
Output: Area: 56.25, Perimeter: 30, is_square: Yes.

Input:  length = 3.0, breadth = 9.0
Output: Area: 27.0, Perimeter: 24.0, is_square: No.

Author: Vaibhav
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <class T>
class Rectangle
{
    T length;
    T breadth;

public:
    Rectangle(T length, T breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    T area_of_rect()
    {
        return length * breadth;
    }

    T perimeter_of_rect()
    {
        return 2 * (length + breadth);
    }

    bool is_square()
    {
        return (length == breadth) ? true : false;
    }
};

int main(void)
{
    double x, y;

    cout << "\nEnter the length: ";
    cin >> x;

    cout << "\nEnter the breadth: ";
    cin >> y;

    Rectangle rect(x, y);

    cout << "\nArea of rectangle is: " << rect.area_of_rect() << endl;
    cout << "\nPerimeter of rectangle is: " << rect.perimeter_of_rect() << endl;

    if (rect.is_square())
        cout << "\nIt is square.\n";
    else
        cout << "\nIt is not a square.\n";

    return 0;
}

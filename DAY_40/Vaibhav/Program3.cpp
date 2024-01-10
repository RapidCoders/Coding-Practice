/*
Q.3 write Program to swap two numbers without using a third variable.

Input:
      a = 10
      b = 12
Output:
      a = 12
      b = 10

Input:
      a = 55
      b = 20
Output:
      a = 20
      b = 55

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(void)
{
    int a, b;

    cout << "\nEnter the first number: ";
    cin >> a;

    cout << "\nEnter the second number: ";
    cin >> b;

    cout << "\nEntered numbers are:\n";
    cout << "\na = " << a << " "
         << "b = " << b << endl;

    swap(&a, &b);
    
    cout << "\nNumbers after swapping: \n";
    cout << "\na = " << a << " "
         << "b = " << b << endl;

    return 0;
}

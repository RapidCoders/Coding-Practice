/*
Q.1 Write a program which accept number from user and display even sqaures 'n' times.

Input: 3
Output: 4 16 36

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void display_even_squares(int num)
{
    int i, square, counter = 1;

    cout << "\nEven squares are: ";
    for (i = 1; i <= num;)
    {
        square = counter * counter;

        if ((square % 2) == 0)
        {
            cout << square << " ";
            i++;
        }
        counter++;
    }
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    display_even_squares(num);

    return 0;
}

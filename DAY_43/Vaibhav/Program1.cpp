/*
Q.1 Write a program that prints the numbers from 1 to 100. But for multiples of three, print "Fizz" instead of the number, and for the multiples of five, print "Buzz." For numbers that are multiples of both three and five, print "FizzBuzz."

Input: 3
Output: Fizz

Input: 5
Output: Buzz

Input: 15
Output: FizzBuzz

Input: 7
Output: 7

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void fizz_buzz()
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "\nFizzBuzz\n";
        else if (i % 3 == 0)
            cout << "\nFizz\n";
        else if (i % 5 == 0)
            cout << "\nBuzz\n";
        else
            cout << endl
                 << i << endl;
    }
}

int main(void)
{
    fizz_buzz();

    return 0;
}

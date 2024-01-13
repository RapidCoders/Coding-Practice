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

void fizz_buzz(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
        cout << "\nFizzBuzz\n";
    else if (num % 3 == 0)
        cout << "\nFizz\n";
    else if (num % 5 == 0)
        cout << "\nBuzz\n";
    else
        cout << num << endl;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    fizz_buzz(num);

    return 0;
}

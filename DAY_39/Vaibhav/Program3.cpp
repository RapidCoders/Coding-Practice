/*
Q.3 write Program for Binary to Octal conversion.

Input: binary = 1010
Output:  12

Input: binary = 01010
Output: 25

Author: Shreyash
*/

#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int bin_to_oct(int num)
{
    string oct;
    int base = 1, sum = 0;

    while (num)
    {
        sum += base * (num % 10);
        base *= 2;
        num /= 10;

        if (base > 4 || num == 0)
        {
            base = 1;
            oct = std::to_string(sum) + oct;
            sum = 0;
        }
    }
    return std::stoi(oct);
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nOctal form of " << num << " is " << bin_to_oct(num) << endl;

    return 0;
}

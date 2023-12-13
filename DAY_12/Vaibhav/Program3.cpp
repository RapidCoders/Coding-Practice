/*
Q.3 Write a program which accept input in binary format and convert it into decimal number.

Input :n = 11000
Output : 24

Input :n = 1011
Output : 11

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int pow(int x, int y)
{
    int i, temp = x;

    if (y == 0)
        return 1;

    for (i = 1; i < y; i++)
        x = x * temp;
    return x;
}

int bin_to_dec(int bin)
{
    int dec = 0;
    int power = 0;

    while (bin != 0)
    {
        if (bin % 10)
            dec = dec + pow(2, power);
        power++;
        bin /= 10;
    }
    return dec;
}

int main()
{
    int bin;

    cout << "\nEnter the binary number: ";
    cin >> bin;

    cout << "\nDecimal conversion is: " << bin_to_dec(bin) << endl;

    return 0;
}

/*
Q.3 Write a program which accept decimal number and covert it into binary.

Input :n = 24
Output : 11000

Input :n = 11
Output : 1011

Author: Shreyash
*/

#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int dec_to_bin(int num)
{
    string bin;
    string digit;

    while (num != 0)
    {
        digit = std::to_string(num % 2);
        bin += digit;
        num /= 2;
    }

    std::reverse(bin.begin(), bin.end());

    return stoi(bin);
}

int main()
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nBinary conversion of " << num << " is: " << dec_to_bin(num) << endl;

    return 0;
}

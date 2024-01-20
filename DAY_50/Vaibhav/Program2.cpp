/*
Q.2 Write a program to count total number of characters in a string. Do not consider any sapces or punctuations.

Input  : "The best of both worlds"
Output : Total number of characters in a string: 19

Input  : "Twinkle twinkle little star, how I wonder what you are!"
Output : Total number of characters in a string: 44

Author: Suyash
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int count_characters(const std::string &str)
{
    int count = 0;

    for (const char &c : str)
    {
        if (c != ' ' && c != '.' && c != ',' && c != '!' && c != '?')
            count++;
    }
    return count;
}

int main(void)
{
    std::string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nTotal number of characters from above string is: " << count_characters(str) << endl;

    return 0;
}

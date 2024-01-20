/*
Q.3 Write a Program to convert string into upper_lower case character by character.

Input: Str = "Twinkle twinkle little star, how I wonder what you are!"
Output:"TwInKlE TwInKlE LiTtLe StAr, hOw i wOnDeR WhAt yOu aRe!"

Author: Shreyash
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

string &upper_lower(string &str)
{
    int i;

    for (i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && (i % 2 == 0))
            str[i] -= ' ';
        if ((str[i] >= 'A' && str[i] <= 'Z') && (i % 2 != 0))
            str[i] += ' ';
    }
    return str;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nConverted string is: " << upper_lower(str) << endl;

    return 0;
}

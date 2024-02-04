/*
Q.1 Write a function that takes two strings as input and concatenates them together, separating them by a space.

Input: "", ""
Expected Output: ""

Input: "Hello!", "World?"
Expected Output: "Hello! World?"

Input: "   Hello", "World   "
Expected Output: "   Hello World   "

Input: "This is a", "test"
Expected Output: "This is a test"

Input: "123", "456"
Expected Output: "123 456"

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;

char *strcat(char *str1, char *str2)
{
    char *concated_str = str1;

    while (*str1 != '\0')
        str1++;
    str1--;

    if ((*str1 != ' ') && (*str2 != ' '))
    {
        str1++;
        *str1 = ' ';
        str1++;
    }

    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    
    return concated_str;
}

int main(void)
{
    char str1[50];
    char str2[30];

    cout << "\nEnter the first string: ";
    cin.getline(str1, 50);

    cout << "\nEnter the second string: ";
    cin.getline(str2, 30);

    cout << "\nString after concatenation is: " << strcat(str1, str2) << '\n';

    return 0;
}

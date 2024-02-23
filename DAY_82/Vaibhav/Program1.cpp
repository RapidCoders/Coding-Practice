/*
Q.1 Given a string s, your task is to reverse only the vowels in the string.

Input: "hello"
Expected Output: "holle"

Input: "xyz"
Expected Output: "xyz"

Input: "a"
Expected Output: "a"

Input: "aeiou"
Expected Output: "uoiea"

Input: "leetcode"
Expected Output: "leotcede"

Author: Vaibhav
*/

#include <iostream>
#include <string.h>
using std::cin;
using std::cout;

void swap(char *a, char *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

bool is_vowel(char x)
{
    if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return true;
    return false;
}

char *reverse_vowels(char *str)
{
    int i = 0, j = strlen(str) - 1;

    while (i < j)
    {
        if (!is_vowel(str[i]))
            i++;
        else if (!is_vowel(str[j]))
            j--;
        else
            swap(&str[i++], &str[j--]);
    }
    return str;
}

int main(void)
{
    char str[50];

    cout << "\nEnter the string: ";
    cin.getline(str, 50);

    reverse_vowels(str);

    cout << "\nString after reveresing the vowels: " << str << '\n';

    return 0;
}

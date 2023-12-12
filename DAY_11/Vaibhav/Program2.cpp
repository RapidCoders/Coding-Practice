/*
Q.2 Program to count the total number of vowels and consonants in a string.

(vowels = a, e, i, o, u)
(consonants = b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z)

Input: This is a really simple sentence
Output: Number of vowels: 10
        Number of consonants: 17

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void display(string str)
{
    int vowel_count = 0;
    int consonants_count = 0;

    for (char c : str)
    {
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
            vowel_count++;
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            consonants_count++;
    }
    cout << "\nNumber of vowels: " << vowel_count << endl;
    cout << "Number of consonants: " << consonants_count << endl;
}

int main()
{
    string s;

    cout << "\nEnter the string: ";
    std::getline(cin, s);

    display(s);

    return 0;
}

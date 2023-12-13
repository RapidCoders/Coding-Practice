/*
Q.1 Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

Input : "Marvellous Multi OS"
Input : M
Output : 0

Input : "Marvellous Multi OS"
Input : W
Output : -1

Input : "Marvellous Multi OS"
Input : e
Output : 4

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int search_first_occ(char *str, char key)
{
    int i = 0;

    if (str == NULL)
        return -1;

    while (str[i] != '\0')
    {
        if (str[i] == key)
            return i;
        i++;
    }
    return -1;
}

int main(void)
{
    char key;
    int index;
    char str[50];

    cout << "Enter the string: ";
    scanf("%[^\n]", str);

    cout << "Enter the key to search: ";
    cin >> key;

    index = search_first_occ(str, key);

    if (index != -1)
        cout << "\nKey \'" << key << "\' found at index " << index << endl;
    else
        cout << "\nKey not found!!!\n";

    return 0;
}

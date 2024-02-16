/*
Q.3 Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and locates the occurrence of the string x in the string s. The function returns an integer denoting the first occurrence of the string x in s (0 based indexing).

Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the string GeeksForGeeks as substring.

Input:
s = GeeksForGeeks, x = For
Output: 5
Explanation: For is present as substring in GeeksForGeeks from index 5 (0 based indexing).

Author: Shreyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int strstr(char *s, char *x)
{
    int i = 0, j = 0, index;

    while (s[i] != '\0')
    {
        if (s[i] == x[0])
        {
            j = 0;
            index = i;

            while ((s[i] != '\0') && (x[j] != '\0'))
            {
                if (s[i] != x[j])
                    return -1;
                i++;
                j++;
            }
            if (x[j] == '\0')
                return index;
            i--;
        }
        i++;
    }
    return -1;
}

int main(void)
{
    int result;
    char str1[50];
    char str2[50];

    cout << "\nEnter the data in first string: ";
    cin.getline(str1, 50);

    cout << "\nEnter the data in second string: ";
    cin.getline(str2, 50);

    result = strstr(str1, str2);

    if (result == -1)
        cout << "\n\'" << str2 << "\' is not present in string \'" << str1 << "\'\n";
    else
        cout << "\n\'" << str2 << "\' is present in string \'" << str1 << "\' at index " << result << '\n';

    return 0;
}

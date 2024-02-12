/*
Q.1 Write a function that takes a string as input and returns the character that appears consecutively the most number of times, along with the count of consecutive occurrences.

Input: "hello world"
Expected Output: 'l', 2

Input: "aabbbccccddddd"
Expected Output: 'd', 5

Input: ""
Expected Output: '', 0

Input: "aaaaa"
Expected Output: 'a', 5

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

#define max(x, y) ((x) > (y)) ? (x) : (y)

struct Result
{
    char c;
    int consecutive_count;
};

Result most_consecutive_occ(const string &str)
{
    char c;
    Result result = {str[0], 0};
    int i, j, count = 0, length = str.length();

    for (i = 0; i < length; i++)
    {
        c = str[i];
        while (c == str[i] && i < length)
        {
            count++;
            i++;
        }

        result.consecutive_count = max(count, result.consecutive_count);
        if (result.consecutive_count == count)
            result.c = c;

        c = str[i];
        count = 0;
        i--;
    }
    return result;
}

int main(void)
{
    string str;
    Result result;

    cout << "\nEnter the string: ";
    getline(cin, str);

    result = most_consecutive_occ(str);

    cout << '\n'
         << '\'' << result.c << '\'' << " is the most consecutively occurred character with frequency " << result.consecutive_count << ".\n";

    return 0;
}

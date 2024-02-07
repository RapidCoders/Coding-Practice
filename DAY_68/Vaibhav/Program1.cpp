/*
Q.1 Write a function that takes a string as input and returns a compressed version of the string where consecutive repeated characters are replaced by the character followed by the count of repetitions.

Input: "aaabbc"
Expected Output: "a3b2c1"

Input: ""
Expected Output: ""

Input: "x"
Expected Output: "x1"

Input: "!@##$$"
Expected Output: "!1@1#2$2"

Input: "abcdefg"
Expected Output: "a1b1c1d1e1f1g1"

Author: Vaibhav
*/

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using std::cin;
using std::cout;
using std::string;

string compress_str(const string &str)
{
    string compressed_string;
    std::unordered_map<char, int> freq;
    std::unordered_set uniques(str.begin(), str.end());

    for (char c : str)
        freq[c]++;

    for (char c : uniques)
    {
        compressed_string = char((freq[c] + '0')) + compressed_string;
        compressed_string = c + compressed_string;
    }
    return compressed_string;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    cout << "\nString after compression is: " << compress_str(str) << '\n';

    return 0;
}

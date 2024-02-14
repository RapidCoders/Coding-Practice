// Q.1 Write a function that takes a string as input and returns the character that appears consecutively the most number of times, along with the count of consecutive occurrences.
// Input: "hello world"
// Expected Output: 'l', 2

// Input: "aabbbccccddddd"
// Expected Output: 'd', 5

// Input: ""
// Expected Output: '', 0

// Input: "aaaaa"
// Expected Output: 'a', 5
// Author: Vaibhav

#include <iostream>
using namespace std;

pair<char, int> most_appears(const string& str) {
    if (str.empty()) {
        return make_pair('\0', 0);
    }

    char cc = str[0];
    char maxc = cc;
    int cco = 1;
    int maxco = 1;

    for (size_t i = 1; i < str.length(); ++i) {
        if (str[i] == cc) {
            ++cco;
        } else {
            if (cco > maxco) {
                maxco = cco;
                maxc = cc;
            }
            cc = str[i];
            cco = 1;
        }
    }
    if (cco > maxco) {
        maxco = cco;
        maxc = cc;
    }

    return make_pair(maxc, maxco);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    pair<char, int> result = most_appears(str);

    if (result.second > 1) {
        cout << result.first << "," << result.second << endl;
    } else {
        cout << " " ", 0" << endl;
    }

    return 0;
}




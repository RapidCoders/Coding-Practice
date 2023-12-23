// Q.1 Write a program which accept a string from user and return the count of number of words in that string.
// Input: Maze gaon kokan ahe. Mazya gavashejari samudra ahe.
// Output: 8

// Input:
// Output: 0
// Author: Vaibhav

#include <iostream>
using namespace std;

int countWords(string str) {
    int count = 0;
    bool flag;

    for (char i : str) {
        if (i == ' ' || i == '\t' || i == '\n') {
            if (flag) {
                count++;
                flag = false; 
            }
        } else {
            flag = true;
        }
    }
    return count+1;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    int result = countWords(inputString);
    cout << "Number of words: " << result << endl;

    return 0;
}

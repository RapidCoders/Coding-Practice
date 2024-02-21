// Q.3 Given a string S. The task is to print all unique permutations of the given string that may contain dulplicates in lexicographically sorted order.
// Input: ABC
// Output: ABC ACB BAC BCA CAB CBA
// Explanation: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .

// Input: ABSG
// Output:
// ABGS ABSG AGBS AGSB ASBG ASGB BAGS 
// BASG BGAS BGSA BSAG BSGA GABS GASB 
// GBAS GBSA GSAB GSBA SABG SAGB SBAG 
// SBGA SGAB SGBA
// Explanation: Given string ABSG has 24 permutations.
// Author: Shreyash

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

void swap_char(char &a, char &b) 
{
    char temp = a;
    a = b;
    b = temp;
}

void generatePermutations(string str, int left, int right, set<string>& combinations) 
{
    if (left == right) 
    {
        combinations.insert(str);
        return;
    }

    for (int i = left; i <= right; i++) 
    {
        swap_char(str[left], str[i]);
        generatePermutations(str, left + 1, right, combinations);
        swap_char(str[left], str[i]);
    }
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    set<string>combinations;

    generatePermutations(str, 0, str.size() - 1, combinations);

    for (string s: combinations) {
        cout << s << endl;
    }

    cout << combinations.size();

    return 0;
}

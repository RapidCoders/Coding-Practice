/*
Q.3 Given a string S. The task is to print all unique permutations of the given string that may contain dulplicates in lexicographically sorted order.

Input: ABC
Output: ABC ACB BAC BCA CAB CBA
Explanation: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .

Input: ABSG
Output:
ABGS ABSG AGBS AGSB ASBG ASGB BAGS
BASG BGAS BGSA BSAG BSGA GABS GASB
GBAS GBSA GSAB GSBA SABG SAGB SBAG
SBGA SGAB SGBA
Explanation: Given string ABSG has 24 permutations.

Author: Shreyash
*/

#include <iostream>
#include <algorithm>

using namespace std;

void print_permutations(string str)
{
    sort(str.begin(), str.end());

    cout << str << endl;
    while (next_permutation(str.begin(), str.end()))
        cout << str << endl;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    print_permutations(str);

    return 0;
}

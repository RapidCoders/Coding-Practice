/*
Q.3 Given an array of strings arr[] of length n representing non-negative integers, arrange them in a manner, such that, after concatanating them in order, it results in the largest possible number. Since the result may be very large, return it as a string.

Input:
n = 5
arr[] =  {"3", "30", "34", "5", "9"}
Output: "9534330"
Explanation:
Given numbers are  {"3", "30", "34", "5", "9"}, the arrangement "9534330" gives the largest value.

Input:
n = 4
arr[] =  {"54", "546", "548", "60"}
Output: "6054854654"
Explanation:
Given numbers are {"54", "546", "548", "60"}, the arrangement "6054854654" gives the largest value.

Author: Shreyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string largest_number(vector<string> &arr)
{
    string result;

    sort(arr.begin(), arr.end(), [](const string &a, const string &b)
         { return a + b > b + a; });

    for (const string &str : arr)
        result += str;
    return (result[0] == '0') ? "0" : result;
}

int main(void)
{
    int i, n;
    string x;
    vector<string> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "\nOutput is: "
         << largest_number(nums) << '\n';

    return 0;
}

/*
Q3. Write a program which accept N number from the user and return smallest number from it.

Input: 5
Input: 10 20 30 40 50
Output: 10

Input: 6
Input: 85 69 21 45 73 25
Output: 21

Author: Shreyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int find_min(vector<int> nums)
{
    int i, min = nums.at(0);

    for (i = 0; i < nums.size(); i++)
    {
        if (min > nums.at(i))
            min = nums.at(i);
    }
    return min;
}

int main(void)
{
    int i, n, x;
    vector<int> nums;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the data: ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "Smallest number from array is: " << find_min(nums) << endl;

    return 0;
}

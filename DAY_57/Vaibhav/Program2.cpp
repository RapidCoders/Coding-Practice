/*
Q.2 Write a program to print sum of all elements in an array

Input  : [1, 2, 3, 4, 5]
Output : Sum of all the elements of an array: 15

Author: Suyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int sum_of_n_elements(const vector<int> &nums)
{
    int sum = 0;

    for (int x : nums)
        sum += x;
    return sum;
}

int main(void)
{
    int i, x, n;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "\nSum of all the elements from array is: " << sum_of_n_elements(nums) << '\n';

    return 0;
}

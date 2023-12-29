/*
Q.2 Write a program to check whether number is Lucky number or not.

Explanation:
The sequence of natural numbers or subset of integers that we get after removing second, third, fourth, fifth, and so on number respectively from the sequence. By applying the process there still remains some numbers indefinitely in the sequence such numbers are known as lucky numbers.

Example :
Consider the sequence of following natural numbers:

1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, ….

Let's remove every second number (2, 4, 6, 8, 10, ……) from the above sequence, we get:

1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, …………

Let's remove every third number (5, 11, 17, 23, ……) from the above sequence, we get:

1, 3, 7, 9, 13, 15, 19, 21, 25, …….

Continue the above process indefinitely by removing the fourth, fifth, sixth,……, and so on, until after a fixed number of steps, certain natural numbers remain indefinitely. The numbers that remains in the sequence are known as lucky Numbers.

Author: Suyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int count_elements(vector<int> nums)
{
    int count = 0;

    for (int x : nums)
    {
        if (x != 0)
            count++;
    }
    return count;
}

bool check_lucky_num(int num)
{
    vector<int> nums;
    int i, j, count = 1;

    for (i = 1; i <= num; i++)
        nums.push_back(i);

    for (i = 2; i < num; i++)
    {
        for (j = 1; j < nums.size(); j += i)
            nums[j] = 0;

        if (count_elements(nums) < i)
            break;
    }

    for (int x : nums)
    {
        if (x == num)
            return true;
        }
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_lucky_num(num))
        cout << endl
             << num << " is lucky number.\n";
    else
        cout << endl
             << num << " is not a lucky number.\n";

    return 0;
}

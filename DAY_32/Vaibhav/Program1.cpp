/*
Q.1 Write a function that takes an array of integers and returns the length of the longest consecutive elements sequence.

Input: [100, 4, 200, 1, 3, 2]
Output: 4 (the longest consecutive elements sequence is [1, 2, 3, 4])

Input: [9, 1, 4, 7, 2, 8, 3, 5]
Output: 5 (the longest consecutive elements sequence is [1, 2, 3, 4, 5])

Input: [3, 3, 2, 2, 1, 1]
Output: 3 (longest consecutive sequence is [1, 2, 3])

Input: [10, 20, 30, 40, 50]
Output: 5 (longest consecutive sequence is [10, 20, 30, 40, 50])

Author: Vaibhav
*/

#include <vector>
#include <iostream>
#include <unordered_set>
using std::cin;
using std::cout;
using std::endl;

// template <class T>
// int min(const vector<T> &container)
// {
//     int min_ele = *container.begin();

//     for (int x : container)
//     {
//         if (min_ele > x)
//             min_ele = x;
//     }
//     return min_ele;
// }

int longest_consecutive_sequence(const std::vector<int> &nums)
{
    int i, num, longest_seq = 0, sequence;
    std::unordered_set<int> temp_set(nums.begin(), nums.end());

    for (int x : temp_set)
    {
        if (temp_set.find(x - 1) == temp_set.end())
        {
            num = x;
            sequence = 1;

            while (temp_set.find(num + 1) != temp_set.end())
            {
                num++;
                sequence++;
            }
            longest_seq = (longest_seq < sequence) ? sequence : longest_seq;
        }
    }
    return longest_seq;
}

int main(void)
{
    int i, x, num;
    std::vector<int> nums;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nEnter the data: ";
    for (i = 1; i <= num; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "\nNumber of longest consecutive elements sequence is: " << longest_consecutive_sequence(nums) << endl;

    return 0;
}
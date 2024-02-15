// Q.1 Write a function that takes a list of integers as input and returns the first duplicate number found in the list. If there are no duplicates, return -1.
// Input: [1, 2, 3, 4, 3, 5]
// Expected Output: 3

// Input: [1, 2, 3, 4, 5]
// Expected Output: -1

// Input: [1, 2, 3, 4, 3, 5, 5, 6]
// Expected Output: 3

// Input: [-1, 2, -3, 4, -3, 5]
// Expected Output: -3

// Input: []
// Expected Output: -1
// Author: Vaibhav


#include<iostream>
#include<vector>

int first_dupli(std::vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    std::vector<int> arr;
    int num;
    std::cin >> num;
    for (int i = 0; i < num; i++)
    {
        int temp;
        std::cin >> temp;
        arr.push_back(temp);
    }
    std::cout << first_dupli(arr);
    return 0;
}

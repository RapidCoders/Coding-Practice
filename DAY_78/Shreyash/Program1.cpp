// Q.1 Write a function that takes a positive integer n as input and returns the sum of the squares of all positive integers up to n.
// Input: 5
// Output: 55  # 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 1 + 4 + 9 + 16 + 25 = 55

// Input: 10
// Expected Output: 385

// Input: 1
// Expected Output: 1

// Input: 0
// Expected Output: 0

// Input: -5
// Expected Output: None (or any indication that input is invalid)
// Author: Vaibhav

#include<iostream>

int sqr_sum(int *num)
{
    int sum = 0;
    for (int i = 1; i <= *num; i++)
    {
        sum = sum + (i*i);
    }
    return sum;

}

int main()
{
    int num;

    std :: cin >> num;
    int *ptr = &num;

    if(*ptr > 0)
    {
        std :: cout << sqr_sum(ptr);
    }
    else
    {
        std :: cout << "Invalid input. ";
    }
    return 0;
}


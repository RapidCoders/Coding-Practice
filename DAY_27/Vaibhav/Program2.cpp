/*
Q.2 Program to check whether a given number is Tech number or not.
Explanation : A number is called a tech number if the given number has an even number of digits and the number can be divided exactly into two parts from the middle. After equally dividing the number, sum up the numbers and find the square of the sum. If we get the number itself as square, the given number is a tech number, else, not a tech number. For example, 3025 is a tech number.

Input: 3025
Output: Tech Number

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool check_tech_num(int num)
{
    string left_num, right_num, snum = std::to_string(num);
    int i, sum, num_len = snum.size();

    if (snum.size() % 2 != 0)
        return false;

    for (i = 0; i < snum.size(); i++)
    {
        if (i < num_len / 2)
            left_num.push_back(snum[i]);
        else
            right_num.push_back(snum[i]);
    }

    sum = std::stoi(left_num) + std::stoi(right_num);

    if ((sum * sum) == num)
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_tech_num(num))
        cout << endl
             << num << " is tech number.\n";
    else
        cout << endl
             << num << " is not a tech number.\n";

    return 0;
}
/*
Q.2 Write program which accept number and gives average of that many prime numbers.
Example :

Input : Number = 5
[Prime numbers : 2,3,5,7,11]
Output : 28

Input : Number = 7
[Prime numbers : 2,3,5,7,11,13,17]
Output : 58

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int check_prime(int num)
{
    int i;

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int sum_prime_nums(int num)
{
    int i, cnt = 2, sum = 0;

    for (i = 1; i <= num;)
    {
        if (check_prime(cnt))
        {
            sum += cnt;
            i++;
        }
        cnt++;
    }
    return sum;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nAddition of first " << num << " prime numbers is: " << sum_prime_nums(num) << endl;

    return 0;
}
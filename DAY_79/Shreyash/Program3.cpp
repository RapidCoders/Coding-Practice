#include<iostream>
using namespace std;

void one_digit(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int mod = num%10;
        sum = sum + mod;
        num /= 10;
    }
    if(sum >= 10)
    {
        one_digit(sum);
    }
    else
    {
        cout << sum;
    }
}

int main()
{
    int num;
    cin >> num;
    one_digit(num);
    return 0;
}

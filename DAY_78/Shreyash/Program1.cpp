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

    std :: cout << sqr_sum(ptr);

    return 0;
}


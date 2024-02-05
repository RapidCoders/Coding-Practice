// Q.3 write a program which takes input number and gives sum of all odd numbers upto that number(Note : Solve using Recursion).
// Input: 10
// Output: 26
// Author: Shreyash

#include<iostream>
using namespace std;

int sum_odd(int num)
{
	if(num <= 0)
	{
		return 0;
	}
	else if (num%2 == 0)
	{
		return sum_odd(num - 1);
	}
	else
	{
		return num + sum_odd(num -2);
	}
}

int main()
{
	int num;
	cout << "Enter the Nth term :";
	cin >> num;
	int result = sum_odd(num);
	cout<<"Sum :"<<result;
	return 0;
}

// Q.2 Program to print the average of n numbers.
// For example: 1,2,3,4,5
// Number of all elements = 5
// Sum of all elements = 1+2+3+4+5 =15
// Average = Sum of all elements / number of all elements = 15/5 =3
// Average =3
// Author: Suyash

#include <iostream>
#include<vector>
using namespace std;

int avg(vector<int>arr)
{
	int sum = 0;
	for(int i:arr)
	{
		sum = sum + i;
	}
	return sum;
}


int main()
{
	vector<int>arr;
	int num;
	cout<<"Number of all elements : ";
	cin>>num;
	int temp;
	for(int i = 1;i<=num;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	int ot = avg(arr)/num;
	cout<<"Average = "<<ot;

	return 0;
}

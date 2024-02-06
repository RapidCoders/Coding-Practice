// Q.3 write a Program for Trapping Rain water problem.
// Here, in this page we  will discuss one of the famous problem of  Trapping Rain Water in C++ . We are given with n non-negative integers representing an elevation map where the width of each bar is 1, we need to compute how much water it is able to trap after raining.

// Example :
// Input : arr[5] = {3, 0, 2, 0, 4}
// Output : 7
// Explanation : We can trap “3 units” of water between 3 and 2, “1 unit” on top of bar 2 and “3 units” between 2 and 4. See below diagram also.

// Input : arr[7] = {1, 0, 3, 0, 4, 0, 2}
// Output : 6
// Author: Shreyash

#include<iostream>
#include<vector>
using namespace std;

int water_mul_zeros(vector<int>arr)
{
	int sum = 0;
	int mid = (arr.size()/2)+1;
	for(int i = 0;i < arr.size();i++)
	{ 
		if(arr[i] == 0)
		{
			if(i > mid)
			{
				sum = sum + arr[i + 1];
			}
			else
			{
				sum = sum + arr[i - 1];
			}
		}
	}
	return sum;
}

int water_2zero(vector<int>arr)
{
	int first = 0;
	int last = 0;
	for(int i = 0;i < arr.size();i++)
	{ 
		if(arr[i] == 0)
		{
			first = arr[i-1];
			break;
		}
	}
	for(int i = arr.size()-1;i >= 0;i--)
	{ 
		if(arr[i] == 0){
			last = arr[i+1];
			break;
		}
	}	
	return first+last;
}

	


int main()
{
	vector<int>arr;
	int num;
	cin >> num;
	int temp;
	int zeros = 0;
	for(int i = 0;i < num;i++)
	{ 
		cin >> temp;
		if (temp == 0)
		{
			zeros++;
		}
		
		arr.push_back(temp);
	}
	if(zeros == 2)
	{
		cout<<water_2zero(arr);
	}
	else
	{
		cout<<water_mul_zeros(arr);
	}
	return 0;
}

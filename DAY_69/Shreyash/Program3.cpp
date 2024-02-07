// Q.3 write a Program to Replace each element by its rank given in array.
// There is an array of n elements, replace each element of the array by its corresponding rank. The minimum value element will have the highest rank..

// Input : arr[] = { 100, 2, 70, 12 , 90};
// Output : 5 1 3 2 4
// Author: Shreyash

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rankof(int k,vector<int>arr)
{
	sort(arr.begin(),arr.end());
	for(int i = 0; i < arr.size();i++)
	{
		if(k == arr[i])
		{
			return i+1;
		}
	}
	return 0;
}

int main()
{
	vector<int>arr;
	int num;
	cin >> num;
	for (int i = 0;i < num ;i++)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	for(int i:arr)
	{
		cout << rankof(i,arr) << " ";
	}
	return 0;
}

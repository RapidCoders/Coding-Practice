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

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

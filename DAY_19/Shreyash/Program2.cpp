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

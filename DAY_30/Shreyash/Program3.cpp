
// Q.3 Write program for removing duplicate element in an array.
// Input: 10, 20, 20, 30, 40, 40, 40, 50, 50
// Output: 10 20 30 40 50
// Author: Shreyash

#include<iostream>
#include<vector>
#include <set>
using namespace std;

set<int> dupli_remover(vector<int>arr)
{
	set<int> unique;
	for(int i:arr){
		for(int j = 1;j<arr.size();j++)
		{
			if(i == arr[j]){
				unique.insert(arr[j]);
			}

		}

	}
	return unique;
}

int main()
{
	vector<int>arr;
	set<int>no_dupli;
	int num;
	cin>>num;
	int temp;
	for(int i = 1;i<=num;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	no_dupli = dupli_remover(arr);
	for(int j:no_dupli){
		cout<<j<<" ";
	}
    return 0;
}

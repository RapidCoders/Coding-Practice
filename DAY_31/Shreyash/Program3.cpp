
// Q.3 Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// Input: nums = [2,2,1]
// Output: 1

// Input: nums = [4,1,2,1,2]
// Output: 4
// Author: Shreyash

#include <iostream>
#include <vector>
using namespace std;

void once_occurence(vector<int>arr){
	for(int i=0; i<arr.size(); i++)
	{
		int counter = 0;
		for(int j=0; j<arr.size(); j++)
		{
			if(arr[i] == arr[j])
			{
				counter++;
			}
		}
		if(counter == 1)
			cout<<arr[i];
	}
	
}

int main() {
    vector<int>arr;
    int num;
    cout << "Number: ";
    cin >> num;
    int temp;
	for(int i = 1;i<=num;i++){
		cin>>temp;
		arr.push_back(temp);
	}

	once_occurence(arr);


}

// Q.2 Write a program to check whether number is Lucky number or not.
// Explanation: 
// The sequence of natural numbers or subset of integers that we get after removing second, third, fourth, fifth, and so on number respectively from the sequence. By applying the process there still remains some numbers indefinitely in the sequence such numbers are known as lucky numbers.

// Example :
// Consider the sequence of following natural numbers:

// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, ….

// Let's remove every second number (2, 4, 6, 8, 10, ……) from the above sequence, we get:

// 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, …………

// Let's remove every third number (5, 11, 17, 23, ……) from the above sequence, we get:

// 1, 3, 7, 9, 13, 15, 19, 21, 25, …….

// Continue the above process indefinitely by removing the fourth, fifth, sixth,……, and so on, until after a fixed number of steps, certain natural numbers remain indefinitely. The numbers that remains in the sequence are known as lucky Numbers.

#include <iostream>
#include <vector>
using namespace std;

int counter(vector<int>arr){
	int c = 0;
	for(int i = 0;i<arr.size();i++){
		if(arr[i]!=0){
			c++;
		}
	}
	return c;
}

bool luck_number(vector<int>arr,int num)
{
	for(int i = 2;i<num;i++){
		for(int k = 1;k<num;k = k + i){
			arr[k] = 0; 
		}
		int count = counter(arr);
		if(count < i)
		{
			break;
		}
	}
	
	
	for (int j : arr)
	{
		if (j == num)
		{
			return true;
		}
	}
	return false;  
}



int main() {
    vector<int>arr;
    int num;
    cout << "Number: ";
    cin >> num;
    for(int i = 1;i<=num;i++){
        arr.push_back(i);
    }
    bool luck = luck_number(arr,num);
	if(luck){
		cout<<"True";
	}else{
		cout<<"False";
	}

}

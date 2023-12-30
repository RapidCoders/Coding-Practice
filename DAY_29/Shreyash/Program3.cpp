// Q.3 Write a program to check number is Abundant Number or Not.
// Input: 12
// Output: True.
// Explanation:
// 12 having a proper divisor is 1, 2, 3, 4, 6 

// The sum of these factors is 16 it is greater than 12 
// So it is an Abundant number

// Some other abundant numbers: 

// 18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120

Author: Shreyash

#include <iostream>
#include <vector>
using namespace std;

bool perfect_num(int num){
	int sum = 0;
	for(int i = 1;i<num;i++){
		if(num%i == 0){
			sum = sum + i;
			cout<<i<<" ";
		}
	}
	if(sum > num){
		return true;
	}else{
		return false;
	}
	
}

int main() {
    vector<int>arr;
    int num;
    cout << "Number: ";
    cin >> num;
    bool flag = perfect_num(num);
	if(flag){
		cout<<"True";
	}else{
		cout<<"False";
	}

}

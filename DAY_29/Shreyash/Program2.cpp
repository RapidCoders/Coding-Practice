// Q.2 Write a program to check whether given number is Perfect number or not.
// Explanation: 
// Let's take the number 496 and heck it is a perfect number or not.

// First, we find the factors of 496 i.e. 1, 2, 4, 8, 16, 31, 62, 124, and 248. Let's find the sum of factors (1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 +248 = 496). We observe that the sum of factors is equal to the number itself. Hence, the number 496 is a perfect number.

// Input : Enter the number : 28
// Output : 28 is a perfect number.

// Input : Enter the number : 4558
// Output : 4558 is not a perfect number.
// Author: Suyash

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
	if(sum == num){
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

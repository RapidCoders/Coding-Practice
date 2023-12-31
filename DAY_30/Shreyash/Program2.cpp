
// Q.2 Write a program to check whether given number is Fascinating number or not.
// Example :
// Let's take any number (n) say 327 and check whether the given number is fascinating or not. On multiplying the given number (n) by 2 and 3, we get:

// 327×2=654

// 327×3=981

// Now, concatenate the above results to the given number (n).

// "327"+"654"+ "981"= 327654981

// We observe that the resultant () contains all the digits from 1 to 9, exactly once. Hence, the given number 327 is a fascinating number. Note that, we have not added the result to the given number. Some other fascinating numbers are 192, 219, 273, 327, 1902, 1920, 2019 etc.
// Author: Suyash


#include <iostream>
#include <vector>
using namespace std;

bool fascinating(int num){
	int two = num * 2;
	int three = num * 3;
	string num_str = to_string(num)+to_string(two)+to_string(three);
	// cout<<num_str;
	int count = 0;

	for(int j = '1';j<='9';j++){
		for(char i : num_str)
		{
			if(j == i){
				count++;
				break;
			}
		
		}
	}
	cout<<" "<<count<<" ";
	if(count == 9){
		return true;
	}else{
		return false;
	}
	
}

int main() {
    // vector<int>arr;
    int num;
    cout << "Number: ";
    cin >> num;
    bool flag = fascinating(num);
	if(flag){
		cout<<"True";
	}else{
		cout<<"False";
	}
	

}

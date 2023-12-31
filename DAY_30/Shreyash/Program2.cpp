#include <iostream>
#include <vector>
using namespace std;

bool fascinating(int num){
	int two = num * 2;
	int three = num * 3;
	string num_str = to_string(num)+to_string(two)+to_string(three);
	// cout<<num_str;
	int count = 0;
	for(char i : num_str){
		if(i == '1'||i == '2'||i == '3'||i == '4'||i == '5'||i == '6'||i == '7'||i == '8'||i == '9'){
			count++;
		}
	}
	// cout<<" "<<count<<" ";
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

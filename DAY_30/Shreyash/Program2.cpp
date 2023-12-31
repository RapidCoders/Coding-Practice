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

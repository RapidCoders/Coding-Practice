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

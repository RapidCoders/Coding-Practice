
// Q.2 Write a Program to print Odd and Even Numbers from an Array.
// Input  : 1,2,5,6,3
// Output : Odd Numbers: 1 5 3
//          Even Numbers: 2 6 2
// Author: Suyash

#include <iostream>
#include <vector>
using namespace std;

void even_odd(vector<int>arr){
	vector<int>even1;
	vector<int>odd2;

	for(int i : arr){
		if(i%2 == 0){
			even1.push_back(i);
		}
		else{
			odd2.push_back(i);
		}
	}
	cout<<"Even Numbers:";
	for(int k:even1){
		cout<<k<<" ";
	}
	cout<<endl;
	cout<<"odd Numbers:";
	for(int j:even1){
		cout<<j<<" ";
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

	even_odd(arr);


}

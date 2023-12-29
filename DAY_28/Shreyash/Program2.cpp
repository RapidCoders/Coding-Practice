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

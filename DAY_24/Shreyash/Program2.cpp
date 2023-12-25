
// Q.2 Write a program to find median for user defined inputs.
// Input : 25,11,7,76,26
// Output : 7
// Input : 25,11,7,76,26,10
// Output : 18
// Author: Suyash



#include <iostream>
#include <vector>
using namespace std;

int median_even(vector<int>arr,int num)
{
    int sum = arr[arr.size()/2] + arr[(arr.size()/2)+1];
    return sum/2;
}
int median_odd(vector<int>arr,int num)
{
    int sum = arr[arr.size()/2];
    return sum;
    
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
    int even = median_even(arr,num);
    int odd = median_odd(arr,num);
    if(num%2 == 0){
        cout<<even;
    }else{
        cout<<odd;
    }
    return 0;
}


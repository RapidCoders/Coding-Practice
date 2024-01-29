// Q.2 Write a program to print sum of all elements in an array
// Input  : [1, 2, 3, 4, 5]
// Output : Sum of all the elements of an array: 15
// Author: Suyash
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    int temp;
    int sum = 0;
    for (int i = 1;i <= num;i++)
    {
        cin >> temp;
        arr.push_back(temp);
        sum = sum + temp;   
    }

    cout << sum;


    return 0;
}

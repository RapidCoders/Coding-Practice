#include<iostream>
#include<vector>
using namespace std;

int count_peak(vector<int>arr)
{
    int counter = 0;
    for(int i = 1;i < arr.size()-1;i++)
    {
        if(arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    int temp;
    for(int i = 0;i < num;i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    cout << count_peak(arr);
    return 0;
}

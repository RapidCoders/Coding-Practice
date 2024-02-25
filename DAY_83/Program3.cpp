#include<iostream>
#include<vector>
using namespace std;

int counter(int a,vector<int>arr)
{
    int count = 0;
    for(int i:arr)
    {
        if(a == i)
        {
            count++;
        }

    }
    return count;
}

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    for(int i = 0; i<num;i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    for (int j : arr)
    {
        if(counter(j,arr) == 1)
        {
            cout << j;
            break;
        }
    }
    

    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

void asc_desc(vector<int>arr)
{
    for(int i = 0;i < arr.size()/2;i++)
    {
        for(int j = 0;j < arr.size()/2;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }   
    }
    for(int i = (arr.size()/2)+1;i < arr.size();i++)
    {
        for(int j = (arr.size()/2)+1;j < arr.size();j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }   
    }

    for(int k : arr)
    {
        cout << k << " ";
    }

}

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    int temp;
    for(int i = 0;i<num;i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    asc_desc(arr);
    return 0;
}

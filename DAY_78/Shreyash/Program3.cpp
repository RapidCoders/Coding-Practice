#include<iostream>
#include<vector>
using namespace std;

int nth_smallest(vector<int>arr,int nth)
{
    for(int i = 0;i<arr.size();i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    // for(int i:arr)
    // {
    //     cout << i<<" ";
    // }
    return arr[nth-1];

}

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int nth;
    cin >> nth;
    cout << nth_smallest(arr,nth);
    return 0;
}

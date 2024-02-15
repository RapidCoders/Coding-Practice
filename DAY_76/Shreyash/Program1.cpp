#include<iostream>
#include<vector>

int first_dupli(std::vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    std::vector<int> arr;
    int num;
    std::cin >> num;
    for (int i = 0; i < num; i++)
    {
        int temp;
        std::cin >> temp;
        arr.push_back(temp);
    }
    std::cout << first_dupli(arr);
    return 0;
}

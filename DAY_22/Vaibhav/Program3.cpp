/*
Q.3 Write a program for Finding Minimum scalar product of two vectors of same size.

Input :arr1[4] = [10, 30, 40, 20]
            arr2[4] = [2, 4, 5, 1]
Output : 230
Explanation : 10*5 + 20*4 + 30*2 + 40*1 = 230

Author: Shreyash
*/

#include <iostream>
#include <vector>
#define ASCENDING 1
#define DESCENDING 2
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

vector<int> &sort(vector<int> &vec, const int order)
{
    int i, j;

    if (order == ASCENDING)
    {
        for (i = 0; i < vec.size() - 1; i++)
        {
            for (j = i + 1; j < vec.size(); j++)
            {
                if (vec[i] > vec[j])
                    swap(vec[i], vec[j]);
            }
        }
    }
    else if (order == DESCENDING)
    {
        for (i = 0; i < vec.size() - 1; i++)
        {
            for (j = i + 1; j < vec.size(); j++)
            {
                if (vec[i] < vec[j])
                    swap(vec[i], vec[j]);
            }
        }
    }
    return vec;
}

int find_scalar_product(vector<int> v1, vector<int> v2)
{
    int i, sum = 0;

    if (v1.size() != v2.size())
        return -1;

    sort(v1, ASCENDING);
    sort(v2, DESCENDING);

    for (i = 0; i < v1.size(); i++)
        sum += v1[i] * v2[i];
    return sum;
}

int main(void)
{
    int ret;
    vector<int> vec1 = {10, 30, 40, 20};
    vector<int> vec2 = {2, 4, 5, 1};

    ret = find_scalar_product(vec1, vec2);

    if (ret != -1)
        cout << "\nMinimum scalar product of two vectors is: " << ret << endl;
    else
        cout << "\nSize of vectors are different!\n";

    return 0;
}

// Q.3 Write program for removing duplicate element in an array.
// Input: 10, 20, 20, 30, 40, 40, 40, 50, 50
// Output: 10 20 30 40 50
// Author: Shreyash

#include<iostream>
#include<vector>
#include <set>
using namespace std;

set<int> dupli_remover(vector<int>arr)
{
	set<int> unique;
	for(int i:arr){
		for(int j = 1;j<arr.size();j++)
		{
			if(i == arr[j]){
				unique.insert(arr[j]);
			}

		}

	}
	return unique;
}

int main()
{
	vector<int>arr;
	set<int>no_dupli;
	int num;
	cin>>num;
	int temp;
	for(int i = 1;i<=num;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	no_dupli = dupli_remover(arr);
	for(int j:no_dupli){
		cout<<j<<" ";
	}
    return 0;
}


// OR

#include<iostream>
using namespace std;
int main ()
{
    int A[10], B[10], n, i, j, k = 0;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> A[i];    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (A[i] == B[j])
                break;
        }
        if (j == k)
        {
            B[k] = A[i];
            k++;
        }
    }
    cout << "Repeated elements after deletion : ";
    for (i = 0; i < k; i++)
        cout << B[i] << " ";
    return 0;
}

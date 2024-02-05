// Q.3 write a program Print Right Diamond Number Pattern.
// Input : First term =  3

// Output :

// 3
// 4 4
// 5 5 5
// 6 6 6 6
// 6 6 6 6
// 5 5 5
// 4 4
// 3

// Author: Shreyash

#include<iostream>
using namespace std;

void patt(int r)
{
	for(int i = r;i <= r*2;i++)
	{
		for(int j = r;j <= i;j++)
		{
			cout<<i<<" ";
		}

		cout<<endl;
	}
	for(int i = r*2;i >= r;i--)
	{
		for(int j = r;j <= i;j++)
		{
			cout<<i<<" ";
		}

		cout<<endl;
	}
	
}

int main()
{
	int r;
	cin >> r;
	patt(r);
	return 0;
}

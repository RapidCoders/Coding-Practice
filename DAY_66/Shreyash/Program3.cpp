
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

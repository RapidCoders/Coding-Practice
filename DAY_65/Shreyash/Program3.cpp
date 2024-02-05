#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int xor_gate(int i1 ,int i2)
{
    if(i1 == i2)
	{
		return 0;
	} 
	else
	{
		return 1;
	}
}

int main()
{
    int i1;
	cin >> i1;
	int i2;
	cin >> i2;
	cout<< xor_gate(i1,i2);
    return 0;
}

// Q.3 write a program(EOR Gate) which takes two inputs and gives output based on input.
// Input Should be combination of zero and one.

// Input : 0
//         1
// Output : 1
// Author: Shreyash

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

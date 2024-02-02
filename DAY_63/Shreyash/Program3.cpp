#include <iostream>
using namespace std;

int posi_decoding(string digits, int n)
{

	if (n == 0 || n == 1)
		return 1;
	if (digits[0] == '0')
		return 0;

	int count = 0; 

	if (digits[n - 1] > '0')
		count = posi_decoding(digits, n - 1);
	if (digits[n - 2] == '1'
		|| (digits[n - 2] == '2'
		&& digits[n - 1] < '7'))
		count = count + posi_decoding(digits, n - 2);

	return count;
}


int main()
{
    string digits;
    cin >> digits;
	int size = digits.length();
	cout << "Count is " << posi_decoding(digits, size);
	return 0;
}


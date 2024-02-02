// Q.3 write a program to count possible decoding of a given digit sequence.
// 1 = A, 2 = B, 3 = C, . . . . , 26 = Z.
// The decoding programs are the most possible questions asked and are largely practiced in C  programming. The program counts the number of possible decoding’s of the entered digit by the user of the given sequence.
// For example :- if the digit sequence is “12” then there are two possible decoding’s for this – One of them is ‘AB’ when we decode 1 as ‘A’ and 2 as ‘B’. Now we can also decode this digit sequence “12” as ‘L’ when we decode digits 1 and 2 taken together as an integer 12.

// Now let’s take another example for reference,

// Sequence = 131

// Possible decoding (1, 3, 1,)    = ACA
// Possible decoding (13, 1)   = MA
// So, the total possible decoding’s of sequence 131 is 2.

// Input: Enter the sequence : 141
// Expected Output: Possible count of decoding of the sequence : 2.

// Author: Shreyash

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


/*
Q.3 write a program(XOR Gate) which takes two inputs and gives output based on input.
Input Should be combination of zero and one.

Input : 0
        1
Output : 1

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

// int xor_gate(int num1, int num2)
// {
//     if ((num1 != 0 && num1 != 1) || (num2 != 0 && num2 != 1))
//         return -1;
//     return num1 ^ num2;
// }

// int xor_gate(int num1, int num2)
// {
//     if ((num1 != 0 && num1 != 1) || (num2 != 0 && num2 != 1))
//         return -1;
//     return (num1 != num2);
// }

int xor_gate(int num1, int num2)
{
    if ((num1 == 0 && num2 == 1) || (num1 == 1 && num2 == 0))
        return 1;
    if ((num1 == 0 && num2 == 0) || (num1 == 1 && num2 == 1))
        return 0;
    return -1;
}

int main(void)
{
    int num1, num2, result;

    cout << "\nEnter the first input: ";
    cin >> num1;

    cout << "\nEnter the second input: ";
    cin >> num2;

    result = xor_gate(num1, num2);

    if (result == -1)
        cout << "\nInvalid Input.\n";
    else
        cout << "\nOutput of xor gate is: " << result << '\n';

    return 0;
}

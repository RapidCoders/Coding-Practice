/*
Q.2 Program to perform user defined operation such as Addition, Subtraction, Multiplication, Division, using Switch case.

Option 1 - Addtion 
Option 2 - Subtraction
Option 3 - Multiplication
Option 4 - Division

Take user defined input and Option and perform operation.

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int addition(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}

float division(int num1, int num2)
{
    return num1 / num2;
}

int main(void)
{
    int n1, n2, choice;

    cout << "\nHello, Welcome...\n";
    
    while (1)
    {
        cout << "\nChoose from the below options:\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n>_ ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter first number: ";
                cin >> n1;

                cout << "Enter second number: ";
                cin >> n2;

                cout << endl << n1 << " + " << n2 << " = " << addition(n1, n2) << endl;

                break;

            case 2:
                cout << "Enter first number: ";
                cin >> n1;

                cout << "Enter second number: ";
                cin >> n2;

                cout << endl  << n1 << " - " << n2 << " = " << subtraction(n1, n2) << endl;

                break;

            case 3:
                cout << "Enter first number: ";
                cin >> n1;

                cout << "Enter second number: ";
                cin >> n2;

                cout << endl << n1 << " * " << n2 << " = " << multiplication(n1, n2) << endl;

                break;

            case 4:
                cout << "Enter first number: ";
                cin >> n1;

                cout << "Enter second number: ";
                cin >> n2;

                cout << endl << n1 << " / " << n2 << " = " << division(n1, n2) << endl;

                break;

            case 5:
                cout << "\nThank you for using out appliation!\n";
                return 0;
                break;

            default:
                cout << "\nPlease choose valid choice!\n";
        }
    }

    return 0;
}

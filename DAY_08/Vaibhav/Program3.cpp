/*
Q.3 Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 4, col = 4

Output :
*  *  *  *  
*  #  #  *  
*  #  #  *  
*  *  *  *  

Input : row = 6, col = 6
Output :
*  *  *  *  *  *  
*  #  #  #  #  *  
*  #  +  +  #  *  
*  #  +  +  #  *  
*  #  #  #  #  *  
*  *  *  *  *  * 

Input : row = 8, col = 8
Output :
*  *  *  *  *  *  *  *  
*  #  #  #  #  #  #  *  
*  #  +  +  +  +  #  *  
*  #  +        +  #  *  
*  #  +        +  #  *  
*  #  +  +  +  +  #  *  
*  #  #  #  #  #  #  *  
*  *  *  *  *  *  *  *  

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void pattern_print(int row, int col)
{
    int i, j;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i == 1 || j == 1 || i == row || j == col)
                cout << "* ";
            else if (i == 2 || j == 2 || i == row - 1 || j == col - 1)
                cout << "# ";
            else if (i == 3 || j == 3 || i == row - 2 || j == col - 2)
                cout << "+ ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of cols: ";
    cin >> col;

    pattern_print(row, col);

    return 0;
}

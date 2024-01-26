// Q.3 Write a program to print given Pattern.
// Input: num = 4
// Output:
//  *  *  *  *  *  *  *
//     *           *
//        *     *
//           *
// Author: Shreyash

#include <iostream>
using namespace std;

void patt(int row)
{
  int count = 0;
  int count1;
  for (int i = 1; i <= row; i++) 
  {
        count += i;
  }
    for (int i = 0; i < row; i++) 
    {
        count = count - row + i;
        count1 = count;
        for (int j = row; j > i; j--)
         {
            count++;
            if (j != row)
            {

                cout << "*" << count;
            }
            else
            {
                cout << count;
            }
         }
        cout << endl;
        count = count1;
    }

}

int main() {
    int row;
    cout << "Enter the number of rows : ";
    cin >> row;
    patt(row);

    return 0;
}


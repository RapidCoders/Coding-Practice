#include <iostream>
using namespace std;

void patt(int row)
{
  for (int i = row; i > 0; i--) 
  {
        for (int k = row; k > i; k--) 
        {
            cout << "   ";
        }
        for (int j = 0; j < i * 2 - 1; j++) 
        {
            if (i == row) {
                cout << " * ";
            } else {
                if (j == 0 || j == i * 2 - 2) 
                {
                    cout << " * ";
                } else {
                    cout << "   ";
                }
            }
        }
        cout << endl;
    }

}

int main() {
    int row;
    cout << "Enter the number of rows : ";
    cin >> row;
    patt(row);

    return 0;
}


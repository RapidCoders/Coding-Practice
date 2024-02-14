// Q.3 Write a Program to print given pattern.
// Input : 5
// Output :
//  1 2 3 4 5 6 7 8 9 
//    1           7 
//      1       5 
//        1   3 
//          1 
//        1   3 
//      1       5 
//    1           7 
//  1 2 3 4 5 6 7 8 9 

// Author: Shreyash

#include<iostream>
using namespace std;

void patt(int n)
{
      for (int i = 0; i < 2 * n - 1; i++) 
      { 
        int comp; 
        if (i < n) 
        { 
            comp = 2 * i + 1; 
        } 
        else 
        { 
            comp = 2 * (2 * n - i) - 3; 
        } 
        for (int j = 0; j < comp; j++) 
        { 
            cout << " "; 
        } 
        for (int k = 0; k < 2 * n - comp; k++) 
        { 
            if (k == 0 || k == 2 * n - comp - 1 || i == 0 || i == 2 * n - 2) 
            { 
                cout << " " << k + 1; 
            } 
            else 
            { 
                cout << "  "; 
            } 
        } 
        cout << endl; 
    } 
}

int main()
{
  int n;
  cin >> n;
  patt(n);
  return 0;
}

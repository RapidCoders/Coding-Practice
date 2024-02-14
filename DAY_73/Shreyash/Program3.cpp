#include<iostream>
// using namespace std;

void patt(int num)
{
  for (int i = 0; i < num; i++) { 
        for (int j = 0; j < 2 * i + 1; j++) { 
            std :: cout << " "; 
        } 
        for (int k = 0; k < 2 * (num - i) - 1; k++) { 
            if (k == 0 || k == 2 * (num - i) - 2 || i == 0) 
                std :: cout <<" "<< (char)(k + 'A'); 
            else 
            { 
                std :: cout << "  "; 
            } 
        } 
        std :: cout << std :: endl; 
    }
}

int main()
{
  int num;
  std :: cin >> num;
  patt(num);
  return 0;
}

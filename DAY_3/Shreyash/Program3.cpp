// Code

#include<iostream>
using namespace std;

int facto(int num)
{ 
  int fact = 1;
  for(int i = 1;i<=num;i++)
  {
    fact = fact*i;
  }

  return fact;

}

int main(){
  int num;
  cout<<"Enter num :";
  cin>>num;
  cout<<"factorial = ";
  cout<<facto(num);
  return 0;
}

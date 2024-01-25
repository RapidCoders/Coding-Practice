#include <iostream>
using namespace std;

bool neonOrNot(int sqr,int num)
{
  int sum = 0;
  while (sqr > 0)
  {
    int rem = sqr%10;
    sum = sum + rem;
    sqr = sqr/10;
  }
  if (sum == num)
  {
    return true;
  }
  else
  {
    return false;
  }

  
    
}

int main()
{
    int num;
    cout<<"Num : ";
    cin>>num;
    if (neonOrNot(num*num,num))
    {
      cout<<"True";
    }
    else{
      cout<<"False";
    }
    return 0;
}

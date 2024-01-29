// Q.1 Write a program that prints swastika pattern.
// Input: 7
// Output:
// *     * * * *
// *     *
// *     *
// * * * * * * * 
//       *     *
//       *     *
// * * * *     *
// Author: Vaibhav

#include <iostream>
using namespace std;

void patt(int num) 
{
    for(int i = 1;i<=num/2;i++)
    {
      for(int j =1;j<=num/2+1;j++)
      {
        if(j==1||j==num/2+1)
	{
          cout<<" *";
        }else{
          cout<<"  ";
        }
      }
	  for(int j =1;j<=num/2;j++)
	  {
        if(i==1)
	{
          cout<<" *";
        }
	else
	{
          cout<<"  ";
        }
      }
	  cout<<endl;
    }
	for(int i = 1;i<=num;i++)
	{
		cout<<" *";
	}
	cout<<endl;
	for(int i = 1;i<=num/2;i++)
	{
		for(int j =1;j<=num/2;j++)
		{
        if(i==num/2)
	{
          cout<<" *";
        }
	else
	{
          cout<<"  ";
        }
      }
	  for(int j =1;j<=num/2+1;j++)
	  {
        if(j==num/2+1||j==1)
	{
          cout<<" *";
        }
	else
	{
          cout<<"  ";
        }
      }
	  cout<<endl;
	}
	  
}

int main(){
  int num;
  cin>>num;
  patt(num);
  return 0;
}

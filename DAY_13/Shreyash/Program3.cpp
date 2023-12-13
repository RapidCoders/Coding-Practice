// Q.3 Write a program which accept two numbers and check it is Friendly Pair or not.
// Input :num1 = 30
//        num2 = 140
// Output : 30 & 140 are friendly pairs.

// Input :num1 = 15
//        num2 = 20
// Output : 15 & 20 are not friendly pairs.

// Friendly pair Explanation :(Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2

// Author: Shreyash

#include <iostream>
using namespace std;

int sumdiv(int num){
	int sum = 0;
	for(int i = 1;i<=num;i++){
		if(num%i==0){
			sum = sum + i;
		}
	}
	return sum;
}



int main()
{
	int n1;
	int n2;
	cout<<"Enter 1st num :";
	cin>>n1;
	cout<<"Enter 2nd num :";
	cin>>n2;
	int s1 = sumdiv(n1);
	int s2 = sumdiv(n2);
	if(s1/n1 == s2/n2){
		cout<<n1<<" "<<n2<<" "<<"are Friendly Pair.";
	}else{
		cout<<n1<<" "<<n2<<" "<<"are not Friendly Pair.";
	}
    return 0;
}

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

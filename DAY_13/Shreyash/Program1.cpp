#include <iostream>
using namespace std;

int indexfinder(string str,char charr){
	for(int i = 0;i<=str.length();i++){
		if(str[i] == charr){
			return i;
		}
	}
	return -1;
}

int main()
{
	string str;
	char charr;
	getline(cin,str); 
	cin>>charr;
	int idx = indexfinder(str,charr);
	if (idx != -1) {
        cout<<idx<<endl;
    } else {
        cout <<-1<<endl;
    }
	return 0;
}

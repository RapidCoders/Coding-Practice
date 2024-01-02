#include<iostream>
#include<vector>
using namespace std;

int sumdigitsinstr(string str)
{
    int sum = 0;
    for(char i : str){
        if(i >='1' && i <= '9'){
            sum = sum + i -'0';
        }
    }
    return sum;
}


int main()
{

    string str;
    cout<<"Enter The Str : ";
    getline(cin,str);
    int sum = sumdigitsinstr(str);
    cout<<"Sum numbers present in str :"<<sum;
    return 0;

}

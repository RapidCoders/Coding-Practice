#include<iostream>
using namespace std;

bool isbn_or_not(string num)
{
    int sum = 0;
    int k = 1;
    for (int i = 0;i < num.length();i++)
    {
        sum = sum + (k * num[i]);
        k++;

    }
    if (sum%11 != 0)
        return false;
    

return true;

}

int main()
{
    string num;
    cin >> num;
    if(isbn_or_not(num))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}

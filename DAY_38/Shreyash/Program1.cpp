// Q.1 Write a program to calculate, a) area of rectangle b) perimeter of rectangle c) check it is square or not
// Input:  length = 4.0, breadth = 6.0
// Output: Area: 24.0, Perimeter: 20.0, is_square: No.

// Input:  length = 7.5, breadth = 7.5
// Output: Area: 56.25, Perimeter: 30, is_square: Yes.

// Input:  length = 3.0, breadth = 9.0
// Output: Area: 27.0, Perimeter: 24.0, is_square: No.
// Author: Vaibhav

#include<iostream>
using namespace std;

float arearectangle(float len,float breadth){
    float area;
    area = len*breadth;
    return area;
}

float perimeter(float len,float breadth){
    float perimeter;
    perimeter = 2*(len+breadth);
    return perimeter;
}

int main()
{
    float len;
    cout<<"Length :";
    cin>>len;
    float breadth;
    cout<<"Length :";
    cin>> breadth;
    cout<<"Area of Reactangle :"<<arearectangle(len,breadth)<<endl;
    cout<<"Perimeter of Rectangle :"<<perimeter(len,breadth);
    if(len == breadth)
    {
      cout<<"is_square :"<<"True";
    }
    else
    {
      cout<<"is_square :"<<"False";
    }
    return 0;
}

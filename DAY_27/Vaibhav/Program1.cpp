/*
Q.1 Write a function that takes a string containing only the characters '(', ')', '{', '}', '[' and ']' and determines if the input string is valid. An input string is valid if:
a. Open brackets must be closed by the same type of brackets.
b. Open brackets must be closed in the correct order.

Input: "()"
Output: True

Input: "()[]{}"
Output: True

Input: "(]"
Output: False

Input: "([)]"
Output: False

Input: "{[]}"
Output: True

Author: Vaibhav
*/

#include <iostream>
#include <stack>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::stack;
using std::string;

bool check_parentheses(string str)
{
    stack<char> stk;

    for (char c : str)
    {
        if (c == '(' || c == '[' || c == '{')
            stk.push(c);

        if ((stk.top() == '(' && c == ')') || (stk.top() == '[' && c == ']') || (stk.top() == '{' && c == '}'))
            stk.pop();
    }

    if (stk.empty())
        return true;
    return false;
}

int main(void)
{
    string str;

    cout << "\nEnter the string: ";
    getline(cin, str);

    if (check_parentheses(str))
        cout << "\nBrackets are balanced.\n";
    else
        cout << "\nBrackets are imbalanced.\n";

    return 0;
}
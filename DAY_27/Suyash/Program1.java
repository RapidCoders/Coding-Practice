/*
	Q.1 Write a function that takes a string containing only the characters '(', ')', '{', '}', '[' and ']' and determines 
		if the input string is valid. An input string is valid if:
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
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter an algebraic expression");
		String str = sobj.next();
		
		ChkVaildString cobj = new ChkVaildString();
		boolean bRet = cobj.ChkValidity(str);
		if(bRet == true)
		{
			System.out.println("It is a valid String");
		}
		else
		{
			System.out.println("It is not a valid String");
		}
		
		sobj.close();
	}
}

class ChkVaildString 
{
	public boolean ChkValidity(String str)
	{
		int length = str.length();
		char[] stack = new char[length];
		int top = -1;

		for (int i = 0; i < length; i++) 
		{
		    char currentChar = str.charAt(i);

		    if (currentChar == '(' || currentChar == '[' || currentChar == '{') 
		    {
		        stack[++top] = currentChar;
		    } 
		    else if (currentChar == ')' && top >= 0 && stack[top] == '(') 
		    {
		        top--;
		    } 
		    else if (currentChar == ']' && top >= 0 && stack[top] == '[') 
		    {
		        top--;
		    } 
		    else if (currentChar == '}' && top >= 0 && stack[top] == '{') 
		    {
		        top--;
		    } 
		    else 
		    {
		        return false;
		    }
		}

		return top == -1;
	}
}

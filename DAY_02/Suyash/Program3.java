/*
Q3. Write a function that reverses a string..
Input: SHREYASH
Output: HSAYERHS

Input: COOL
Output: LOOC

Author: Shreyash
*/

import java.util.Scanner;

public class Program3
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a word");
		String str = sobj.next();
		
		ReverseString robj = new ReverseString();
		String reverse = robj.Reverse(str);
		System.out.println("Reversed String is : "+reverse);
		
		sobj.close();
	}
}

class ReverseString
{
	public String Reverse(String str)
	{
		String rstr = "";
		char ch;
		
		for(int i=0; i<str.length(); i++)
		{
			ch = str.charAt(i);
			rstr = ch+rstr;
		}
		return rstr;
	}
}

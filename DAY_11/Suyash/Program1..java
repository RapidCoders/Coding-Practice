/*
	Q.1 Write a program which accepts one string from user and checks the string is palindrome or not.
	Input: "level"
	Output: True
	
	Input: "A man, a plan, a canal, Panama!"
	Output: True
	
	Input: "Hello"
	Output: False
	
	Author: Vaibhav
*/

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sobj.nextLine();
		
		PalindromeString pobj = new PalindromeString();
		
		boolean bRet = pobj.ChkPalindrome(str);
		if(bRet == true)
		{
			System.out.println("Palindrome");
		}
		else
		{
			System.out.println("Not Palindrome");
		}
	}
}

class PalindromeString 
{
	public boolean ChkPalindrome(String str)
	{
		String RevStr;
		str = RemoveSymbol(str);
		str = str.toLowerCase();
		RevStr = Reverse(str);
		
		if(str.equals(RevStr))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public String RemoveSymbol(String str)
	{
		char ch[] = str.toCharArray();
		String tempStr="";
		
		for(int i=0; i<str.length(); i++)
		{
			if(ch[i] != ' ' && ch[i]!='!' && ch[i]!=',' && ch[i]!='?' && ch[i]!=';' && ch[i]!='.')
			{
				tempStr = tempStr + ch[i];
			}
		}
		
		return tempStr;
	}

	public String Reverse(String tempStr)
	{
		//tempStr = tempStr.toLowerCase();
		
		String revStr = "";
		for(int j=0; j<=tempStr.length()-1; j++)
		{
			revStr = tempStr.charAt(j)+revStr;
		}
		
		return revStr;
	}
}

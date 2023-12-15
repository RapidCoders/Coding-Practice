/*
	Q.1 Write a program which accept one number from user and check whether it is palindrome or not.
	Input : 121
	Output : Palindrome
	
	Input : 45654
	Output : Palindrome
	
	Input : 98765
	Output : Not Palindrome
	
	Author: Vaibhav
*/

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter anumber to check whether it is palindrome or not");
		int iNum = sobj.nextInt();
		
		PalindromeNumber pobj = new PalindromeNumber();
		boolean bRet = pobj.ChkPalindrome(iNum);
		
		if(bRet == true)
		{
			System.out.println("Palindrome number");
		}
		else
		{
			System.out.println("Not a plaindrome number");
		}
		sobj.close();
	}
}

class PalindromeNumber
{
	public boolean ChkPalindrome(int iNum)
	{
		int temp = iNum;
		int Rev = 0;
		
		while(temp > 0)
		{
			int Rem = temp%10;
			Rev = (Rev*10)+Rem;
			temp = temp/10;
		}
		
		if(Rev == iNum)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

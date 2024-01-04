package com.Day34;
/*
	Q.1 Given a string, find the first non-repeating character and return its index. If it doesn't exist, return -1.
	Input: "leetcode"
	Output: 0
	
	Input: "loveleetcode"
	Output: 2
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sobj.next();
		
		NonRepeatingCharacter nobj = new NonRepeatingCharacter();
		int iRet = nobj.ChkNonRepeating(str);
		if(iRet == -1)
		{
			System.out.println("Non repeating characters are : "+iRet);
		}
		else
		{
			System.out.println("Non repeating characters is at Index : "+iRet);
		}
		
		sobj.close();
	}
}

class NonRepeatingCharacter
{
	public int ChkNonRepeating(String str)
	{
		int count = 0;
		int i, j = 0;
		
		for(i=0; i<str.length(); i++)
		{
			for(j=0; j<str.length(); j++)
			{
				if(str.charAt(i) == str.charAt(j))
				{
					count++;
				}
			}
			if(count == 1)
			{
				return i;
			}
			count = 0;	
		}
		
		return -1;
	}
}

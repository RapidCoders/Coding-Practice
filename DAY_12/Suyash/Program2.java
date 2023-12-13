/*
	Q.2 Program to replace lower-case characters with upper-case and vice versa.
	Input: str1 = "Great Power"  
	Output: String after case conversion : gREAT pOWER
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sobj.nextLine();
		
		UpperLowerCase cobj = new UpperLowerCase();
		cobj.Case(str);
		
		sobj.close();
	}
}

class UpperLowerCase
{
	public void Case(String str)
	{
		StringBuffer newStr = new StringBuffer(str);
		
		for(int i=0; i<str.length();i++)
		{
			if(Character.isLowerCase(str.charAt(i)))
			{
				newStr.setCharAt(i, Character.toUpperCase(str.charAt(i)));
			}
			else if(Character.isUpperCase(str.charAt(i)))
			{
				newStr.setCharAt(i, Character.toLowerCase(str.charAt(i)));
			}
		}
		
		System.out.println("String after case conversion is : "+newStr);
	}
}

/*
	Q.2 Write a program to count total number of characters in a string. 
		Do not consider any sapces or punctuations.
	Input  : "The best of both worlds"  
	Output : Total number of characters in a string: 19
	
	Input  : "Twinkle twinkle little star, how I wonder what you are!"
	Output : Total number of characters in a string: 44
	
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
		
		NumberOfCharacter nobj = new NumberOfCharacter();
		int Count = nobj.CountCharacter(str);
		System.out.println("Total number of characters in a string: "+Count);
		
		sobj.close();
	}
}

class NumberOfCharacter
{
	public int CountCharacter(String str)
	{
		int count = 0;
		for(int i=0; i<str.length(); i++)
		{
			if(str.charAt(i)>='a' && str.charAt(i)<='z' ||  str.charAt(i)>='A' && str.charAt(i)<='Z' || str.charAt(i)>='0' && str.charAt(i)<='9')
			{
				count++;
			}
		}
		
		return count;
	}
}

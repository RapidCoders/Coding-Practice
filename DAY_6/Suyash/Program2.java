/*
	Q.2 Program to count the total number of punctuation characters exists in a string
	Input: char str [] = "Good Morning! Mr. James Potter. Had your breakfast?"  
	(If any character in the string is matched with ('!', "," ,"\'" ,";" ,"\"", ".", "-" ,"?"), increment the count by 1.)
	
	Output: Total number of punctuation characters exists in string: 4
	Author: Suyash
*/

import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a sentence");
		String str = sobj.nextLine();
		
		CountPunctuation cobj = new CountPunctuation();
		int iRes = cobj.Count(str);
		System.out.println("Number of puncuations are : "+iRes);
		
		sobj.close();
	}
}

class CountPunctuation
{
	public int Count(String str)
	{
		int count = 0;
		
		for(int i=0; i<str.length(); i++)
		{
			if(str.charAt(i)=='!'||str.charAt(i)==','||str.charAt(i)=='/'||str.charAt(i)=='.'||str.charAt(i)=='-'||str.charAt(i)=='?'||str.charAt(i)==':'||str.charAt(i)==';')
			{
				count++;
			}
		}
		return count;
	}
}

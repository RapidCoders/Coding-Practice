/*
	Q.1 Write a program which accept a string from user and return the count of number of words in that string.
	Input: Maze gaon kokan ahe. Mazya gavashejari samudra ahe.
	Output: 8
	
	Input:
	Output: 0
	
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
		
		CountWords cobj = new CountWords();
		int iRet = cobj.Count(str);
		System.out.println("Number of words are : "+iRet);
		
		sobj.close();
	}
}

class CountWords
{
	public int Count(String str)
	{		
		if(str == null)
		{
			return 0;
		}
		else
		{
			int count = 1;
			for(int i=0; i<str.length()-1; i++)
			{
				if(str.charAt(i)==' ' && str.charAt(i+1)!=' ')
				{
					count++;
				}		
			}
			
			return count;
		}
	}
}

/*
	Q.1 Write a function that takes a string as input and returns the first non-repeated character in the string.
	Input: "programming"
	Output: 'p'
	
	Input: "aabbcc"
	Output: ''
	
	Input: "hello"
	Output: 'h'
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a word");
		String str = sobj.next();
		
		NonRepeatedChar nobj = new NonRepeatedChar();
		char cRet = nobj.ChkRepeatedChar(str);
		if(cRet == ' ')
		{
			System.out.println("There is no such repeated character");
		}
		else
		{
			System.out.println("First repeated character is : "+cRet);
		}
		
		sobj.close();
	}
}

class NonRepeatedChar 
{
	public char ChkRepeatedChar(String str)
	{
		int count = 0;
		
		for(int i=0; i<str.length(); i++)
		{
			for(int j=0; j<str.length(); j++)
			{
				if(str.charAt(i) == str.charAt(j))
				{
					count++;
				}
			}
			if(count == 1)
			{
				return str.charAt(i);
			}
			count = 0;
		}
		
		return ' ';
	}
}

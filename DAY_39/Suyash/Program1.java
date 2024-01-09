/*
	Q.1 Write a program to implement a function that checks if a given string is a pangram. 
	A pangram is a sentence or expression that uses every letter of the alphabet at least once.
	
	Input: "The quick brown fox jumps over the lazy dog."
	Output: True
	
	Input:  "Pack my box with five 7623 dozen liquor jugs."
	Output: True
	
	Input:  "The lazy dog slept."
	Output: False
	
	Input:  "Cwm fjord bank glyphs vext quiz."
	Output: True
	
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
		
		Pangram pobj = new Pangram();
		boolean bRet = pobj.containsAllLetters(str);
		if(bRet == true)
		{
			System.out.println("Pangram");
		}
		else
		{
			System.out.println("Not Pangram");
		}
		
		sobj.close();
	}
}
class Pangram
{ 
	public boolean isLetter(char ch)  
	{  
		if (!Character.isLetter(ch))  
			return false;  
	
		return true;  
	}  

	public boolean containsAllLetters(String str)  
	{  
		int len = str.length();
		str = str.toLowerCase(); 
		boolean present[] = new boolean[26];  
		
		for (int i=0; i<len; i++)   
		{  
			if (isLetter(str.charAt(i)))   
			{  
				int letter = str.charAt(i) - 'a';  
				present[letter] = true;  
			}  
		}  
		
		for (int i=0; i<26; i++)   
		{  
			if (!present[i])  
				return false;  
		}  
		return true;  
	}
}

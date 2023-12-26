/*
	Q.1 Write a function that takes a sentence as input and returns the longest word in the sentence. If there are multiple words with the same maximum length, return the first one.
	Input: "The quick brown fox jumps over the lazy dog"
	Output: "jumps"
	
	Input: "Programming is fun"
	Output: "Programming"
	
	Input: "Artificial Intelligence is changing the world"
	Output: Intelligence
	
	Author: Vaibhav
*/
import java .util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sobj.nextLine();
		
		LongestWord lobj = new LongestWord();
		String newStr = lobj.FindLongest(str);
		System.out.println("Longest word is : "+newStr);
		
		sobj.next();
	}
}

class LongestWord
{
	public String FindLongest(String str)
	{
		String words[] = new String[200];
		String word = "";
		String large = "";
		int length = 0;
		
		for(int i=0; i<str.length(); i++)
		{
			if(str.charAt(i) != ' ')
			{
				word = word + str.charAt(i);
			}
			else
			{
				words[length] = word;
				length++;
				word = "";
			}
		}
		
		large = words[0];
		for(int i=0; i<length; i++)
		{
			if(large.length() < words[i].length())
			{
				large = words[i];
			}
		}
		
		return large;
	}
}

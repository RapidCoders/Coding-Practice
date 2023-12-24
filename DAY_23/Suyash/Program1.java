/*
	Q.1 Write a function to find the longest common prefix string amongst an array of strings. 
	If there is no common prefix, return an empty string "".
	The function should return a string, the longest common prefix of all strings in the input list.
	
	Input: 4
	Input: ["apple", "apricot", "apology", "app"]
	Output: "ap"
	
	Input: 4
	Input: ["python", "java", "javascript", "c++"]
	Output: ""
	
	Input: 3
	Input: ["testing", "test", "tester"]
	Output: "test"
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array");
		int size = sobj.nextInt();
		
		String str[] = new String[size];
		System.out.println("Enter the words");
		for(int i=0; i<size; i++)
		{
			str[i] = sobj.next();
		}
		
		LongestCommonPrefixString lobj = new LongestCommonPrefixString();
		String sRet = lobj.CommonPrefixString(str);
		System.out.println(sRet);
		
		sobj.next();
	}
}

class LongestCommonPrefixString
{
	public String CommonPrefixString(String str[])
	{
		if (str.length == 0) 
			return "";
		
		String prefix = str[0];
		for (int i = 1; i < str.length; i++)
		{
			while (str[i].indexOf(prefix) != 0) 
			{
				prefix = prefix.substring(0, prefix.length() - 1);
				if (prefix.isEmpty()) 
				{
					return "";
				}
			}			
		}        
		return prefix;
	}
}

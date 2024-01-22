/*
Q.1 Write a function that takes three strings as input and checks whether the third string is formed by interleaving the characters of the first two strings while maintaining the order of characters.
Input: str1 = "abc", str2 = "def", interleaved = "adbcef"
Expected Output: True

Input: str1 = "abc", str2 = "def", interleaved = "abcde"
Expected Output: False

Input: str1 = "abc", str2 = "def", interleaved = "adbecf"
Expected Output: True

Input: str1 = "abc", str2 = "def", interleaved = "acdbef"
Expected Output: False

Input: str1 = "", str2 = "", interleaved = ""
Expected Output: True

Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String str1 = sobj.next();
		System.out.println("Enter second string");
		String str2 = sobj.next();
		System.out.println("Enter interleaved string");
		String interleaved = sobj.next();
		
		InterleavedString iobj = new InterleavedString();
		boolean result = iobj.ChkInterleaving(str1, str2, interleaved);
		System.out.println(result);
		
		sobj.close();
	}
}

class InterleavedString
{
	public boolean ChkInterleaving(String str1, String str2, String interleaved)
	{
		 int i, j, k;

		    if ((str1.length() + str2.length()) != interleaved.length())
		    {
		        return false;
		    }

		    for (i = 0, j = 0, k = 0; k < interleaved.length(); k++)
		    {
		        if (str1.charAt(i) == interleaved.charAt(k))
		        {
		            i++;
		        }
		        else if (str2.charAt(j) == interleaved.charAt(k))
		        {
		            j++;
		        }
		        else
		        {
		            return false;
		        }
		    }
		    return true;
	}
}

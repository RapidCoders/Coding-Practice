/*
	Q.1 Write a program that takes two strings, s1 and s2, as input and returns True if s2 is a rotation of s1, and False otherwise. 
	A rotation means shifting all characters of one string to the right by any number of positions.
	
	Input: s1 = "hello", s2 = "ohell"
	Expected Output: True
	
	Input: s1 = "python", s2 = "onpyth"
	Expected Output: True
	
	Input: s1 = "apple", s2 = "apple"
	Expected Output: True
	
	Input: s1 = "cat", s2 = "tacocat"
	Expected Output: False
	
	Input: s1 = "", s2 = ""
	Expected Output: True
	
	Input: s1 = "abc", s2 = "bcd"
	Expected Output: False
	
	Input: s1 = "programming", s2 = "program"
	Expected Output: False
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter 1st string");
		String str1 = sobj.next();
		System.out.println("Enter 2nd string");
		String str2 = sobj.next();
		
		CheckRoration cobj = new CheckRoration();
		System.out.println(cobj.ChkRotation(str1, str2));
		
		sobj.close();
	}
}

class CheckRoration
{
	public boolean ChkRotation(String str1, String str2)
	{
		if (str1.length() != str2.length()) 
		{
            return false;
        }

        String concatenated = str1 + str1;

        for (int i = 0; i < concatenated.length() - str2.length() + 1; i++) 
        {
            String substring = concatenated.substring(i, i + str2.length());
            if (substring.equals(str2)) 
            {
                return true;
            }
        }

        return false;
	}
}

/*
	Q.3 Write a Program to find Length of Last Word of user defind string.
	Input: s = "Hello World"
	Output: 5
	Explanation: The last word is "World" with length 5.
	
	Input: s = "luffy is still joyboy"
	Output: 6
	Explanation: The last word is "joyboy" with length 6.
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sobj.nextLine();
		
		LengthOfLastWord lobj = new LengthOfLastWord();
		int iRet = lobj.Length(str);
		System.out.println("Length of last word is : "+iRet);
		
		sobj.next();
	}
}

class LengthOfLastWord 
{
	public int Length(String str)
	{
		int count = 0;
		
		for(int i=str.length()-1; i>0; i--)
		{
			if(str.charAt(i) != ' ')
				count++;
			else
				break;
		}
		
		return count;
	}
}

/*
	Q.3 Write a program to count the sum of numbers in a string.
	Input: string = "Pr22e44pinsta"
	Output: 12
	
	Input: string = "4PREP2INSTA8"
	Output: 14
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a String");
		String str = sobj.next();
		
		SumOfNoInString obj = new SumOfNoInString();
		int iRet = obj.SumofNo(str);
		System.out.println(iRet);
		
		sobj.close();
	}
}

class SumOfNoInString
{
	public int SumofNo(String str)
	{
		int sum = 0;
		
		for(int i=0; i<str.length(); i++)
		{
			if(str.charAt(i)>'0' && str.charAt(i)<'9')
			{
				sum += str.charAt(i) - '0';
			}
		}
		
		return sum;
	}
}

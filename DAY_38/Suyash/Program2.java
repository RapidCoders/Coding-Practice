/*
	Q.2 Write a method to check and return whether given number is Buzz Number or not.
	Explanation:
	Buzz number is another special number in Java that ends with digit 7 or divisible by 7. 
	Unlike Prime and Armstrong numbers, the Buzz number is not so popular and asked by the interviewers.
	
	In simple words, a number is said to be Buzz if it ends with 7 or is divisible by 7.
	
	Let's take some examples of Buzz numbers.
	
	42 is a Buzz number because it is divisible by 7.
	107 is a Buzz number because it ends with 7.
	147 is a Buzz number because it ends with 7 and also divisible by 7.
	134 is not a Buzz number because it is neither end with 7 nor divisible by 7.
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int num = sobj.nextInt();
		
		BuzzNumber bobj = new BuzzNumber();
		boolean bRet = bobj.ChkBuzz(num);
		if(bRet == true)
		{
			System.out.println("It is a Buzz Number");
		}
		else
		{
			System.out.println("It is not a Buzz Number");
		}
		
		sobj.close();
	}
}

class BuzzNumber
{
	public boolean ChkBuzz(int num)
	{
		if(num%7 == 0)
		{
			return true;
		}
		else
		{
			while(num != 0)
			{
				int mod = num%10;
				if(mod == 7)
				{
					return true;
				}
				num = num/10;
			}
		}
		
		return false;
	}
}

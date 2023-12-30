/*
	Q.3 Write a program to check number is Abundant Number or Not.
	Input: 12
	Output: True.
	Explanation:
	12 having a proper divisor is 1, 2, 3, 4, 6 
	
	The sum of these factors is 16 it is greater than 12 
	So it is an Abundant number
	
	Some other abundant numbers: 
	
	18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int num = sobj.nextInt();
		
		AbundantNumber aobj = new AbundantNumber();
		boolean bRet = aobj.ChkAbundant(num);
		
		if(bRet == true)
			System.out.println(num+" is a Abundant number.");
		else
			System.out.println(num+" is not a Abundant number.");
		
		sobj.close();
	}
}

class AbundantNumber
{
	public boolean ChkAbundant(int num)
	{
		int sum = 0;
		
		for(int i=1; i<=num/2; i++)
		{
			if(num%i == 0)
			{
				sum = sum + i;
			}
		}
		
		if(sum >= num)
			return true;
		
		return false;
	}
}

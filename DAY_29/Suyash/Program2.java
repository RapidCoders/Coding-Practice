/*
	Q.2 Write a program to check whether given number is Perfect number or not.
	Explanation: 
	Let's take the number 496 and heck it is a perfect number or not.
	
	First, we find the factors of 496 i.e. 1, 2, 4, 8, 16, 31, 62, 124, and 248. 
	Let's find the sum of factors (1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 +248 = 496). 
	We observe that the sum of factors is equal to the number itself. Hence, the number 496 is a perfect number.
	
	Input : Enter the number : 28
	Output : 28 is a perfect number.
	
	Input : Enter the number : 4558
	Output : 4558 is not a perfect number.
	
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
		
		PerfectNumber pobj = new PerfectNumber();
		boolean bRet = pobj.ChkPerfect(num);
		if(bRet == true)
			System.out.println(num+" is a Perfect number.");
		else
			System.out.println(num+" is not a Perfect number.");
		
		sobj.close();
	}
}

class PerfectNumber
{
	public boolean ChkPerfect(int num)
	{
		int sum = 0;
		
		for(int i=1; i<=num/2; i++)
		{
			if(num%i == 0)
			{
				sum = sum+i;
			}
		}
		if(sum == num)
		{
			return true;
		}
		return false;
	}
}

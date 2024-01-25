/*
	Q.2 Program to determine whether a given number is a Deficient number
	Explanation :
	The deficient number can be defined as the number for which the sum of the proper divisors is lesser than the number itself.
	For example, the number 21 with its proper divisors (1, 3 and 7) has sum (11) lesser than itself.
	
	Input  : Enter the number : 21
	Output : The number is deficient.
	
	Input  : Enter the number : 12
	Output : The number is not deficient.
	
	Input  : Enter the number : 23
	Output :The number is deficient.
	
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
		
		DeficientNumber dobj = new DeficientNumber();
		if(dobj.ChkDeficient(num))
		{
			System.out.println("The number is deficient.");
		}
		else
		{
			System.out.println("The number is not deficient.");
		}
		
		sobj.close();
	}
}

class DeficientNumber 
{
	public boolean ChkDeficient(int num)
	{
		int sum = 0;
		
		for(int i=1; i<=num/2; i++)
		{
			if(num%i == 0)
			{
				sum = sum+i;
			}
		}
		
		if(sum < num)
		{
			return true;
		}
		
		return false;
	}
}

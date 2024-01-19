/*
	Q.3 Write a Program to check whether given input number is Emirp Number or not.
	Explanation:A number is called an emirp number if we get another prime number on reversing the number itself. 
	In other words, an emirp number is a number that is prime forwards or backward. It is also known as twisted prime numbers.
	
	Input: n = 46
	Output:False
	
	Input: n = 1201
	Output:True
	
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
		
		EmirpNumber eobj = new EmirpNumber();
		boolean result = eobj.ChkEmirp(num);
		System.out.println(result);
		
		sobj.close();
	}
}

class EmirpNumber
{
	public boolean ChkPrime(int num)
	{
		for(int i=2; i<=Math.sqrt(num); i++)
		{
			if(num%i == 0)
			{
				return false;
			}
		}
		return true;
	}
	
	public boolean ChkEmirp(int num)
	{
		if(ChkPrime(num) == false)
		{
			return false;
		}
		
		int rev = 0;
		while(num != 0)
		{
			int rem = num%10;
			rev = (rev*10)+rem;
			num = num/10;
		}
		
		if(ChkPrime(rev) == false)
			return false;
		
		return true;
	}
}

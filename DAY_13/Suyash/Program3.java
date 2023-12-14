/*
	Q.3 Write a program which accept two numbers and check it is Friendly Pair or not.
	Input :num1 = 30
	       num2 = 140
	Output : 30 & 140 are friendly pairs.
	
	Input :num1 = 15
	       num2 = 20
	Output : 15 & 20 are not friendly pairs.
	
	Friendly pair Explanation :(Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter 1st number");
		int No1 = sobj.nextInt();
		System.out.println("Enter 2nd number");
		int No2 = sobj.nextInt();
		
		FreindlyPair fobj = new FreindlyPair();
		boolean bRet = fobj.Pair(No1, No2);
		if(bRet == true)
		{
			System.out.println(No1+" & "+No2+" are friendly pairs");
		}
		else
		{
			System.out.println(No1+" & "+No2+" are not friendly pairs");
		}
		
		sobj.close();
	}
}

class FreindlyPair
{
	public boolean Pair(int No1, int No2)
	{
		int sum1 = 0;
		int sum2 = 0;
		
		for(int i=1; i<=No1; i++)
		{
			if(No1%i == 0)
			{
				sum1 = sum1 + i;
			}
		}
		
		int num1 = sum1/No1;
		
		for(int j=1; j<=No2; j++)
		{
			if(No2%j == 0)
			{
				sum2 = sum2 + j;
			}
		}
		
		int num2 = sum2/No2;
		
		if(num1 == num2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

/*
	Q.3 Write a program which accept number from user and state whether it is perfect number or not.
	Input : num = 14
	Output : False
	Input : num = 6
	Output : True
	
	Author: Shreyash 
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int iNo = sobj.nextInt();
		
		PerfectNumber pobj = new PerfectNumber();
		boolean bRet = pobj.Perfect(iNo);
		
		if(bRet == true)
		{
			System.out.println("It is a perfect number");
		}
		else
		{
			System.out.println("It is not perfect number");
		}
		
		sobj.close();
	}
}

class PerfectNumber
{
	public boolean Perfect(int iNo)
	{
		int sum = 0;
		
		for(int i=1; i<iNo; i++)
		{
			if(iNo%i == 0)
			{
				sum = sum+i;
			}
		}
		
		if(iNo == sum)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

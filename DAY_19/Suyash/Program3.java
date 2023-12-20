/*
	Q.3 Write a Program to check if number is Harshad number or not.
	Input : num = 21
	Output : True
	
	it is divisible by its own sum (1+2) of its digit(2,1)
	So it is Harshad's Number
	
	Input : num = 31
	Output : False
	
	it is not divisible by its own sum (3+1) of its digit(3,1)
	So it is not Harshad's Number
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number to check whether is is Harshad number or not");
		int iNo = sobj.nextInt();
		
		HarshadNumber hobj = new HarshadNumber();
		boolean bRet = hobj.Harshad(iNo);
		if(bRet == true)
		{
			System.out.println("It is a Harshad number");
		}
		else
		{
			System.out.println("it is not a Harshad number");
		}
		
		sobj.close();
	}
}

class HarshadNumber
{
	public boolean Harshad(int iNo)
	{
		int temp = iNo;
		int sum = 0;
		
		while(temp > 0)
		{
			int rem = temp%10;
			sum = sum+rem;
			temp = temp/10;
		}
		
		if(iNo%sum ==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

/*
	Q.2 Write a method to check and return whether given number is Spy Number or not.
	Explanation:
	A positive integer is called a spy number if the sum and product of its digits are equal.
	In other words, a number whose sum and product of all digits are equal is called a spy number.
	
	Example:
	Let's take the number 1124 and check whether the number is a spy or not.
	First, we will split it into digits (1, 1, 2, 4). After that find the sum and product of all the digits.
	  Sum = 1 + 1 + 2 + 4 = 8
	  Product = 1 * 1 * 2 * 4 = 8
	We observe that the sum and product of the digits both are equal. Hence, 1124 is a spy number.
	
	Input  : 132
	Output : Spy number.
	
	Input  : 217
	Output : Not a Spy Number.
	
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
		
		SpyNumber obj = new SpyNumber();
		boolean bRet = obj.ChkSpy(num);
		if(bRet == true)
			System.out.println("Spy Number");
		else
			System.out.println("Not a Spy Number");
		
		sobj.close();
	}
}

class SpyNumber
{
	public boolean ChkSpy(int num)
	{
		int sum = 0;
		int product = 1;
		
		int temp1 = num;
		while(temp1 != 0)
		{
			int mod = temp1%10;
			sum = sum + mod;
			temp1 = temp1/10;
		}
				
		int temp2 = num;
		while(temp2 != 0)
		{
			int mod = temp2%10;
			product = product * mod;
			temp2 = temp2/10;
		}
		
		if(sum == product)
		{
			return true;
		}
		
		return false;
	}
}

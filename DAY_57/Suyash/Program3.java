/*
	Q.3 Write a program to check the number is spy number or not.
	Input: num = 1124
	Output:True
	
	Explanation :
	A positive integer is called a spy number if the sum and product of its digits are equal. In other words, a number whose sum and product of all digits are equal is called a spy number.
	1+1+2+4 = 8
	1*1*2*4 = 8
	
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
		
		SpyNumber obj = new SpyNumber();
		System.out.println(obj.ChkSpy(num));
		
		sobj.close();
	}
}

class SpyNumber
{
	public boolean ChkSpy(int num)
	{
		int sum = 0;
		int product = 1;
		
		while(num != 0)
		{
			int rem = num%10;
			sum = sum + rem;
			product = product*rem;
			num = num/10;
		}
		
		if(sum == product)
			return true;
		
		return false;
	}
}

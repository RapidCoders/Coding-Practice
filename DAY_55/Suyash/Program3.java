/*
	Q.3 Write a program to check whether given number is Neon number or not.
	Explaination: A positive integer whose sum of digits of its square is equal to the number itself is called a neon number.
	
	Input: num = 9
	Output: True.
	
	Input: num = 45
	Output: False.
	
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
		
		NeonNumber nobj = new NeonNumber();
		System.out.println(nobj.ChkNeon(num));
		
		sobj.close();
	}
}

class NeonNumber 
{
	public boolean ChkNeon(int num)
	{
		int square = num * num;
		int sum = 0;
		
		while(square != 0)
		{
			int rem = square%10;
			sum = sum+rem;
			square = square/10;
		}
		
		if(sum == num)
		{
			return true;
		}
		
		return false;
	}
}

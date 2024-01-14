/*
	Q.1 Write a program to accepts the number as input from the user and check whether the number is positive or not.
	Input: 10
	Output: Positive
	
	Input: -15
	Output: Negative
	
	Input: 0
	Output: Neutral
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int No = sobj.nextInt();
		
		PositiveNegative pobj = new PositiveNegative();
		pobj.ChkNumber(No);
		
		sobj.close();
	}
}

class PositiveNegative
{
	public void ChkNumber(int No)
	{
		if(No > 0)
		{
			System.out.println("Positive");
		}
		else if(No < 0)
		{
			System.out.println("Negative");
		}
		else
		{
			System.out.println("Neutral");
		}
	}
}

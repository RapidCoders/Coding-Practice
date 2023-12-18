/*
	Q.1 Write a program to which accept number from the user and print fibonacci series up to that number.
	Input : 7
	Output : 0 1 1 2 3 5 8
	
	Input: -3
	Output:
	 
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int iNo = sobj.nextInt();
		
		FibonacciSeries fobj = new FibonacciSeries();
		fobj.Fibonacci(iNo);
		
		sobj.close();
	}
}

class FibonacciSeries 
{
	public void Fibonacci(int iNo)
	{
		int temp = 0;
		int a = 0;
		int b = 1;
		
		if(iNo <= 0)
		{
			System.out.println("Enter number greater than 0");
		}
		else if(iNo == 1)
		{
			System.out.println(a);
		}
		else if(iNo >= 2)
		{
			System.out.print(a+" "+b+" ");
		}

		for(int i=3; i<=iNo; i++)
		{
			temp = a + b;
			System.out.print(temp+" ");
			a = b;
			b = temp;
		}
	}
}

/*
	Q.3 write Program to swap two numbers without using a third variable.
	Input:
	      a = 10
	      b = 12
	Output:
	      a = 12
	      b = 10
	
	Input:
	      a = 55
	      b = 20
	Output:
	      a = 20
	      b = 55
	      
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter 1st number");
		int a = sobj.nextInt();
		System.out.println("Enter 2nd number");
		int b = sobj.nextInt();
		
		System.out.println("Before Swapping");
		System.out.println("a = "+a);
		System.out.println("b = "+b);
		
		SwapNumbers obj = new SwapNumbers();
		obj.Swap(a, b);
		
		sobj.close();
	}
}

class SwapNumbers
{
	public void Swap(int a, int b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
		
		System.out.println("After Swapping");
		System.out.println("a = "+a);
		System.out.println("b = "+b);
	}
}

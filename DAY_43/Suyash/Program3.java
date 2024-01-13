/*
	Q.3 write Recursive program to Calculate Factorial of given number.
	Input: n = 5
	Output: 120
	
	Input: n = 7
	Output: 5040
	
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
		
		RecursiveFactorial robj = new RecursiveFactorial();
		int result = robj.Factorial(num);
		System.out.println(result);
		
		sobj.close();
	}
}

class RecursiveFactorial
{
	public int Factorial(int n)
	{
		if(n == 0)
		{
			return 1;
		}
		else
		{
			return (n*Factorial(n-1));
		}
	}
}

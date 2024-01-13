/*
	Q.3 write Recursive program which accept number from user and return sum upto nth term.
	Input: n = 10
	Output: 55
	
	Input: n = 5
	Output: 15
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int n= sobj.nextInt();
		
		RecursiveSum robj = new RecursiveSum();
		int result = robj.calculateSum(n);
		System.out.println(result);
		
		sobj.close();
	}
}

class RecursiveSum
{
	public int calculateSum(int n)
	{
		if(n ==1)
		{
			return 1;
		}
		else
		{
			n = n + calculateSum(n-1);
			return n;
		}
	}
}

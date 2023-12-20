/*
	Q.1 Write a program to check if a given number is a perfect square.
	A perfect square is a non-negative integer that can be expressed as the product of an integer multiplied by itself. In other words, a positive integer (n) is a perfect square if there exists an integer (m) such that (n = m \times m).
	
	For example:
	
	1 is a perfect square because (1 = 1 times 1).
	4 is a perfect square because (4 = 2 times 2).
	9 is a perfect square because (9 = 3 times 3).
	16 is a perfect square because (16 = 4 times 4).
	Input: 9
	Output: True
	
	Input: 25
	Output: True
	
	Input: 7 
	Output: False
	
	Input: 18
	Output: False
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number you want to find perfect square of");
		int iNo = sobj.nextInt();
		
		PerfectSquare pobj = new PerfectSquare();
		
		boolean bRet = pobj.Square(iNo);
		if(bRet == true)
		{
			System.out.println("It is a perfect square");
		}
		else
		{
			System.out.println("It is not a perfect square");
		}
		
		sobj.close();
	}
}

class PerfectSquare
{
	public boolean Square(int iNo)
	{	
		
		for(int i=2; i<=iNo/2; i++)
		{
			if(iNo%i == 0)
			{
				if((i*i)==iNo)
				{
					return true;
				}
			}
		}
		return false;		
	}
}

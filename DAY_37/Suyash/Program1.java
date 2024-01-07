/*
	Q.1 Write a program to count the number of set bits (1s) in the binary representation of a given non-negative integer.
	Input:  0
	Output: 0
	
	Input:  7
	Output: 3
	
	Input:  123
	Output: 6
	
	Input:  1024
	Output: 1
	
	Input:  65535
	Output: 16
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int num = sobj.nextInt();
		
		CountSetBits cobj = new CountSetBits();
		int iRet = cobj.SetBits(num);
		System.out.println(iRet);
		
		sobj.close();
	}
}

class CountSetBits
{
	public int SetBits(int num)
	{
		int count = 0;
		
		if(num <= 0)
		{
			System.out.println("Enter number greater than zero");
		}
		else
		{
		}
		while(num != 0)
		{
			int rem = num%2;
			if(rem == 1)
			{
				count++;
			}
			num = num/2;
		}
		return count;
	}
}

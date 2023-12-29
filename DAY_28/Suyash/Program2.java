/*
	Q.2 Write a program to check whether number is Lucky number or not.
	Explanation: 
	The sequence of natural numbers or subset of integers that we get after removing second, third, fourth, fifth, 
	and so on number respectively from the sequence. By applying the process there still remains some numbers indefinitely 
	in the sequence such numbers are known as lucky numbers.
	
	Example :
	Consider the sequence of following natural numbers:
	
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, ….
	
	Let's remove every second number (2, 4, 6, 8, 10, ……) from the above sequence, we get:
	
	1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, …………
	
	Let's remove every third number (5, 11, 17, 23, ……) from the above sequence, we get:
	
	1, 3, 7, 9, 13, 15, 19, 21, 25, …….
	
	Continue the above process indefinitely by removing the fourth, fifth, sixth,……, and so on, until after a fixed number of steps, 
	certain natural numbers remain indefinitely. The numbers that remains in the sequence are known as lucky Numbers.
	
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
		
		LuckyNumber lobj = new LuckyNumber();
		boolean bRet = lobj.ChkLuckyNumber(num);
		if(bRet == true)
		{
			System.out.println("It is a Lucky Number");
		}
		else
		{
			System.out.println("Not a Lucky number");
		}
		
		sobj.close();
	}
}

class LuckyNumber
{
	public boolean ChkLuckyNumber(int num)
	{
		int arr[] = new int[num];
		
		for(int i=0; i<num; i++)
		{
			arr[i] = i+1;
		}
		
		for(int i=2; i<num/2; i++)
		{
			int count = 0;
			
			for(int j=0; j< num; j++)
			{
				if(arr[j] != 0)
				{
					count++;
				}
				
				if(count%i == 0)
				{
					arr[j] = 0;
				}
			}
		}
		
		for(int i=0; i<arr.length; i++)
		{
			if(arr[i] != 0 && arr[i]==num)
			{
				return true;
			}
		}
		
		return false;
	}
}

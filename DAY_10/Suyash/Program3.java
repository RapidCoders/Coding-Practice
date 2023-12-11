/*
	Q.3 Write a program which accept n numbers and display factors of numbers.
	
	Input :
	n = 1
	15
	Output : 1 3 5 15
	
	Input :
	n = 2
	10 12
	Output :
	1 2 5 10
	1 2 4 6 12
	
	Author: Shreyash
*/

import java.util.Scanner;

public class Program3
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("For how many many numbers do you want to find the factors...?");
		int iSize = sobj.nextInt();
		
		int arr[] = new int[iSize];
		System.out.println("Enter the numbers for which you want to find the factors");
		for(int i=0; i<iSize; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		FactorsOfN fobj = new FactorsOfN();
		fobj.Factors(iSize, arr);
		
		sobj.close();
	}
}
class FactorsOfN
{
	public void Factors(int iSize,int arr[])
	{
		for(int i=0; i<iSize; i++)
		{
			System.out.print("Factors of "+arr[i]+ " are : ");
			for(int j=1; j<=arr[i]; j++)
			{
				if(arr[i]%j == 0)
				{
					System.out.print(j+" ");
				}
			}
			System.out.println();
		}
	}
}

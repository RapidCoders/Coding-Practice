/*
	Q.2 Program to print the average of n numbers.
	For example: 1,2,3,4,5
	Number of all elements = 5
	Sum of all elements = 1+2+3+4+5 =15
	Average = Sum of all elements / number of all elements = 15/5 =3
	Average =3
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Number of elements");
		int iSize = sobj.nextInt();
		
		int arr[] =new int[iSize];
		System.out.println("Enter the elements");
		for(int i=0; i<iSize; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		AverageOfN aobj = new AverageOfN();
		int iRet = aobj.Average(iSize, arr);
		System.out.println("Average is : "+iRet);
		
		sobj.close();
	}
}

class AverageOfN
{
	public int Average(int iSize, int arr[])
	{
		int Sum = 0;
		for(int i=0; i<arr.length; i++)
		{
			Sum = Sum+arr[i];
		}
		
		int avg = Sum/iSize;
		
		return avg;
	}
	
}

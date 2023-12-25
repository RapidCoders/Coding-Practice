/*
	Q.2 Write a program to find median for user defined inputs.
	Input : 25,11,7,76,26
	Output : 7
	Input : 25,11,7,76,26,10
	Output : 41
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of elements");
		int size = sobj.nextInt();
		
		int arr[] = new int[size];
		
		System.out.println("Enter the elements");
		for(int i=0; i<size; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		Median mobj = new Median();
		int iRet = mobj.CalcMedian(size, arr);
		System.out.println("Median is : "+iRet);
		
		sobj.close();
	}
}

class Median
{
	public int CalcMedian(int size, int arr[])
	{
		if(size%2 != 0)
		{
			return (arr[(size/2)]);
		}
		else
		{
			int Median = ((arr[size/2])+arr[(size/2)-1])/2;
			
			return Median;
		}
	}
}

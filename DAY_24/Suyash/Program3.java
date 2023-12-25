/*
	Q.3 Find minimum and maximum element in an array.
	Input:
	N = 6
	A[] = {3, 2, 1, 56, 10000, 167}
	Output: 1 10000
	Explanation: minimum and maximum elements of array are 1 and 10000.
	
	Input:
	N = 5
	A[]  = {1, 345, 234, 21, 56789}
	Output: 1 56789
	Explanation: minimum and maximum element of array are 1 and 56789.
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
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
		
		MinMaxElement mobj = new MinMaxElement();
		mobj.CalcMinMax(arr);
		
		sobj.close();
	}
}

class MinMaxElement
{
	public void CalcMinMax(int arr[])
	{
		int min = arr[0];
		int max = arr[0];
		
		for(int i=1; i<arr.length; i++)
		{
			if(min > arr[i])
			{
				min = arr[i];
			}
			if(max < arr[i])
			{
				max = arr[i];
			}	
		}
		
		System.out.println("Minimum and Maximum elements of array are : "+min+" and "+max);
	}
}

/*
	Q.3 Write a program for Finding Minimum scalar product of two vectors of same size.
	Input :arr1[4] = [10, 30, 40, 20]
	       arr2[4] = [2, 4, 5, 1]
	       
	Output : 230
	Explanation : 10*5 + 20*4 + 30*2 + 40*1 = 230
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array");
		int size = sobj.nextInt();
		
		int arr1[] = new int[size];
		int  arr2[] =new int[size];
		
		System.out.println("Enter elements of first array");
		for(int i=0; i<size; i++)
		{
			arr1[i] = sobj.nextInt();
		}
	
		System.out.println("Enter elements of second array");
		for(int i=0; i<size; i++)
		{
			arr2[i] = sobj.nextInt();
		}
		
		ScalarProductOfVector pobj = new ScalarProductOfVector();
		int iRet = pobj.ScalarProduct(arr1, arr2);
		System.out.println("Sum is : "+iRet);
		
		sobj.close();
	}
}

class ScalarProductOfVector
{
	public int ScalarProduct(int arr1[], int arr2[])
	{
		//Sort array in ascending order
		int temp1 = 0;
		for(int i=0; i<arr1.length; i++)
		{
			for(int j=i+1; j<arr1.length; j++)
			{
				if(arr1[i] > arr1[j])
				{
					temp1 = arr1[i];
					arr1[i] = arr1[j];
					arr1[j] = temp1;
				}
			}
		}
		
		//sort array in descending order
		int temp2 = 0;
		for(int i=0; i<arr2.length; i++)
		{
			for(int j=i+1; j<arr2.length; j++)
			{
				if(arr2[i] < arr2[j])
				{
					temp2 = arr2[i];
					arr2[i] = arr2[j];
					arr2[j] = temp2;
				}
			}
		}
			
		int sum = 0;
		for(int i=0; i<arr1.length; i++)
		{
			sum = sum + (arr1[i]*arr2[i]);
		}
		
		return sum;
	}
}

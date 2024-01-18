/*
	Q.2 Write a program to find 3rd largest element in an array.
	Input  : [1,2,5,6,3,2]
	Output : 3rd largest element is : 3
	
	Input  : [44,66,99,77,33,22,55]
	Output : 3rd largest element is : 66
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("How many elements do you want to enter");
		int size = sobj.nextInt();
		
		int arr[] = new int[size];
		
		if(size != 0)
		{
			System.out.println("Enter the elements");
			for(int i=0; i<size; i++)
			{
				arr[i] = sobj.nextInt();
			}
		}
		
		ThirdLargest tobj = new ThirdLargest();
		int result = tobj.Find3rdLargest(arr);
		System.out.println("3rd largest element is : "+result);
		
		sobj.close();
	}
}

class ThirdLargest
{
	public int Find3rdLargest(int arr[])
	{
		for(int i=0; i<arr.length; i++)
		{
			for(int j=0; j<arr.length; j++)
			{
				if(arr[j] > arr[i])
				{
					int temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
		
		return arr[arr.length-3];
	}
}

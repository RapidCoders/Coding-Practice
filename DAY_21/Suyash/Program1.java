/*
	Q.1 Write a function to rotate an array of integers to the right by a given number of steps. The function should take an array of integers and the number of steps as parameters and modify the array in-place.
	Input:
	Array: {1, 2, 3, 4, 5}
	Steps: 2
	
	Output:
	Rotated Array: {4, 5, 1, 2, 3}
	
	Input:
	Array: {1, 2, 3, 4, 5}
	Steps: 7
	
	Output:
	Rotated Array: {4, 5, 1, 2, 3}
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of Array");
		int size = sobj.nextInt();
		System.out.println("Enter number of steps");
		int steps = sobj.nextInt();
		
		int arr[] = new int[size];
		System.out.println("Enter elements of array");
		for(int i=0; i<arr.length; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		RotateArray robj = new RotateArray();
		int newArr[] = robj.Rotate(arr,size,steps);
		for(int i=0; i<newArr.length; i++)
		{
			System.out.print(newArr[i]+" ");
		}
		
		sobj.close();
	}
}

class RotateArray
{
	public int[] Rotate(int arr[], int size, int steps)
	{
		int temp = 0;
		
		for(int i=0; i<steps; i++)
		{
			temp = arr[size-1];
			
			for(int j=size-1; j>0; j--)
			{
				arr[j] = arr[j-1];
			}
			arr[0] = temp;
		}
		
		return arr;
	}
}

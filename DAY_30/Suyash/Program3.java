/*
Q.3 Write program for removing duplicate element in an array.
Input: 10, 20, 20, 30, 40, 40, 40, 50, 50
Output: 10 20 30 40 50

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
		
		System.out.println("Enter elements of array");
		for(int i=0; i<size; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		int length = arr.length;
		RemoveDuplicateElements robj = new RemoveDuplicateElements();
		length = robj.RemoveElements(arr, length);
		
		for(int i=0; i<length; i++)
		{
			System.out.print(arr[i]+" ");
		}
		
		sobj.close();
	}
}

class RemoveDuplicateElements 
{
	public int RemoveElements(int arr[], int size)
	{
		if(size==0 || size==1)
		{
			return size;
		}
		
		int temp[] = new int[size];
		int j = 0;
		for(int i=0; i<size-1; i++)
		{
			if(arr[i] != arr[i+1])
			{
				temp[j++] = arr[i];
			}
		}
		
		temp[j++] = arr[size-1];
		for(int i=0; i<j; i++)
		{
			arr[i] = temp[i];
		}
		
		return j;
	}
}

/*
	Q.2 Program to copy all elements of one array into another array.
	Input  : 1,2,3,4,5
	Output : 1,2,3,4,5
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array");
		int size = sobj.nextInt();
		
		int arr[] =  new int[size];
		
		System.out.println("Enter elements of array");
		for(int i=0; i<size; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		CopyElements cobj = new CopyElements();
		int newArr[] = cobj.Copy(arr);
		System.out.print("Elements in new Array are : ");
		for(int i=0; i<size; i++)
		{
			System.out.print(newArr[i]+" ");
		}
		
		sobj.close();
	}
}

class CopyElements
{
	public int[] Copy(int arr[])
	{
		int arr2[] = new int[arr.length];
		
		for(int i=0; i<arr.length; i++)
		{
			arr2[i] = arr[i];
		}
		
		return arr2;
	}
}

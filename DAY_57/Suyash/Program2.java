/*
	Q.2 Write a program to print sum of all elements in an array
	Input  : [1, 2, 3, 4, 5]
	Output : Sum of all the elements of an array: 15
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{	
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size");
		int size = sobj.nextInt();
		
		int arr[] = new int[size];
		System.out.println("Enter the elemets");
		for(int i=0; i<size; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		SumOfArrayElements obj = new SumOfArrayElements();
		System.out.println("Sum of all the elements of an array: "+obj.Sum(arr));
		
		sobj.next();
	}
}

class SumOfArrayElements 
{
	public int Sum(int arr[])
	{
		int sum = 0;
		for(int i=0; i<arr.length; i++)
		{
			sum = sum+arr[i];
		}
		
		return sum;
	}
}

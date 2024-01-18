import java.util.Scanner;
import java.util.Arrays;

public class Program1 
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
		
		ConsecutiveSequence cobj = new ConsecutiveSequence();
		boolean result = cobj.ChkSequence(arr);
		System.out.println(result);
		
		sobj.close();
	}
}

class ConsecutiveSequence
{
	public boolean ChkSequence(int arr[])
	{
		Arrays.sort(arr);
		
		if(arr.length == 0)
		{
			return false;
		}
		else if(arr.length == 1)
		{
			return true;
		}
		else
		{
			int difference = arr[0] - arr[1];
			for(int i=2; i<arr.length-1; i++)
			{
				if((arr[i]-arr[i+1])!= difference)
				{
					return false;
				}
			}
			return true;
		}
	}
}

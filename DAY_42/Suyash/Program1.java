import java.util.Scanner;
import java.util.Arrays;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array");
		int size = sobj.nextInt();
		System.out.println("Enter the element that you want to search");
		int No = sobj.nextInt();
		
		int arr[] = new int[size];
		
		System.out.println("Enter the elements");
		for(int i=0; i<size; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		BinarySearch bobj = new BinarySearch();
		int Result = bobj.Search(arr, No);
		System.out.println(Result);
		
		sobj.close();
	}
}

class BinarySearch
{
	public int Search(int arr[], int No)
	{
		Arrays.sort(arr);
		
		int left = 0;
		int right = arr.length - 1;
		
		while(left <= right)
		{
			int mid = left+(right-left)/2;
			
			if(arr[mid] == No)
			{
				return mid;
			}
			else if(arr[mid] < No)
			{
				left = mid+1;
			}
			else
			{
				right = mid-1;
			}
		}
		
		return -1;
	}
}

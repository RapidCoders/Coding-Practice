/*
	Q.3 Write a Program to find the frequency of odd & even numbers in the given matrixt.
	Input:  a[][] = {       
	                        {4, 1, 3},    
	                        {3, 5, 7},    
	                        {8, 2, 6}    
	                };
	Output:
	Frequency of odd numbers: 5
	Frequency of even numbers: 4
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int rows = sobj.nextInt();
		System.out.println("Enter number of columns");
		int columns = sobj.nextInt();
		
		int matrix[][] = new int[rows][columns];
		
		System.out.println("Enter elements of matrix");
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				matrix[i][j] = sobj.nextInt();
			}
		}
		
		FrqOfOddEvenInMatrix fobj = new FrqOfOddEvenInMatrix();
		fobj.ChkFrequency(rows, columns, matrix);
		
		sobj.close();
	}
}

class FrqOfOddEvenInMatrix
{
	public void ChkFrequency(int rows, int columns,int matrix[][])
	{
		int OddCount = 0;
		int EvenCount = 0;
		
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				if(matrix[i][j]%2 == 0)
					EvenCount++;
				else
					OddCount++;
			}
		}
		
		System.out.println("Frequency of Odd numbers : "+OddCount);
		System.out.println("Frequency of Even numbers : "+EvenCount);
	}
}

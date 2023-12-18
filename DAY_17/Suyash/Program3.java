/*
	Q.3 Write a program to print given pattern.
	Input : row = 7 col = 7
	Output :
	A       A 
	B B     B 
	C   C   C 
	D     D D 
	E       E
	
	Author: Shreyash
*/
import java.util.Scanner;
public class Program3
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int row = sobj.nextInt();
		System.out.println("Enter number of columns");
		int col = sobj.nextInt();
		
		PrintingPattern1 pobj = new PrintingPattern1();
		pobj.Pattern(row,col);
		
		sobj.close();
	}
}
class PrintingPattern1
{
	public void Pattern(int row, int col)
	{	
		char ch = 'A';
		for(int i=1; i<=row; i++,ch++)
		{
			for(int j=1; j<=col; j++)
			{
				if(j==1||i==j||j==col)
				{
					System.out.print(ch+" ");
				}
				else
				{
					System.out.print("  ");
				}
			}
			System.out.println();
		}
	}
}

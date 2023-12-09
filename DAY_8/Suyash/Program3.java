/*
	Q.3 Write a program which accept rows and numbers of column from user and display below pattern.
	Input : row = 4, col = 4
	Output :
	*  *  *  *  
	*  #  #  *  
	*  #  #  *  
	*  *  *  *  
	
	Input : row = 6, col = 6
	Output :
	*  *  *  *  *  *  
	*  #  #  #  #  *  
	*  #  +  +  #  *  
	*  #  +  +  #  *  
	*  #  #  #  #  *  
	*  *  *  *  *  * 
	
	Input : row = 8, col = 8
	Output :
	*  *  *  *  *  *  *  *  
	*  #  #  #  #  #  #  *  
	*  #  +  +  +  +  #  *  
	*  #  +        +  #  *  
	*  #  +        +  #  *  
	*  #  +  +  +  +  #  *  
	*  #  #  #  #  #  #  *  
	*  *  *  *  *  *  *  *  
	
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
		
		PatternPrint pobj = new PatternPrint();
		pobj.Pattern(row, col);
		
		sobj.close();
	}
}
class PatternPrint
{
	public void Pattern(int row, int col)
	{
		if(row != col)
		{
			System.out.println("Number of rows and columns must be same");
		}
		else
		{	
			for(int i=1; i<=row; i++)
			{
				for(int j=1; j<=col; j++)
				{
					if(i==1 || j==1 || i==row || j==col)
					{
						System.out.print("* ");
					}
					else if(i==2 || j==2 || i==row-1 || j==col-1)
					{
						System.out.print("# ");
					}
					else if(i==3 || j==3 || i==row-2 || j==col-2)
					{
						System.out.print("+ ");
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
}

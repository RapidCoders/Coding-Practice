/*
Q.1 Write a program which accept number from user and display even sqaures 'n' times.
Input: 3
Output: 4 16 36

Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int num = sobj.nextInt();
		
		EvenSquare eobj = new EvenSquare();
		eobj.Squares(num);
		
		sobj.close();
	}
}

class EvenSquare
{
	public void Squares(int num)
	{	
		for(int i=1; i<=num*2; i++)
		{
			int square = 0;
			
			if(i%2 == 0)
			{
				square = i * i;;
				System.out.print(square+" ");
			}
		}
	}
}

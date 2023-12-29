/*
	Q.3 program to find the Quadrant in which Coordinates lie.
	Input: (-3, -33)
	Output: point (-3, -33) lies in the Third quadrant
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the x and y coordinates");
		float x = sobj.nextInt();
		float y = sobj.nextInt();
		
		Coordinates cobj = new Coordinates();
		cobj.Quadrant(x, y);
		
		sobj.close();
	}
}

class Coordinates
{
	public void Quadrant(float x, float y)
	{
		if(x==0 && y==0)
		{
			System.out.println("Co-ordinates lies on Origin");
		}
		else if(x>0 && y>0)
		{
			System.out.println("Co-ordinates lies in First Quadrant");
		}
		else if(x<0 && x>0)
		{
			System.out.println("Co-ordinates lies in Second Quadrant");
		}
		else if(x<0 && y<0)
		{
			System.out.println("Co-ordinates lies in Third Quadrant");
		}
		else if(x<0 && y<0)
		{
			System.out.println("Co-ordinates lies in Fourth Quadrant");
		}
		else if(x>0 && y==0)
		{
			System.out.println("Co-ordinates lies on Positive X axis");
		}
		else if(y>0 && x==0)
		{
			System.out.println("Co-ordinates lies on Positive Y axis");
		}
		else if(x<0 && y==0)
		{
			System.out.println("Co-ordinates lies on Negative X axis");
		}
		else if(y<0 && x==0)
		{
			System.out.println("Co-ordinates lies on Negative Y axis");
		}
		else
		{
			System.out.println("Invalid Input");
		}
	}
}

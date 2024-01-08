/*
	Q.1 Write a program to calculate, a) area of rectangle b) perimeter of rectangle c) check it is square or not
	Input:  length = 4.0, breadth = 6.0
	Output: Area: 24.0, Perimeter: 20.0, is_square: No.
	
	Input:  length = 7.5, breadth = 7.5
	Output: Area: 56.25, Perimeter: 30, is_square: Yes.
	
	Input:  length = 3.0, breadth = 9.0
	Output: Area: 27.0, Perimeter: 24.0, is_square: No.
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the length");
		float length = sobj.nextFloat();
		System.out.println("Enter the breadth");
		float breadth = sobj.nextFloat();
		
		Rectangle robj = new Rectangle();
		
		float Area = robj.Area(length, breadth);
		float Perimeter = robj.Perimeter(length, breadth);
		boolean bRet = robj.Square(length, breadth);
		
		System.out.print("Area is: "+Area+", "+"Perimeter is: "+Perimeter);
		if(bRet == true)
		{
			System.out.print(", is_square: YES");
		}
		else
		{
			System.out.print(", is_square: NO");
		}
		
		sobj.close();
	}
}

class Rectangle
{
	public float Area(float length, float breadth)
	{
		float Area = length * breadth;
		return Area;
	}
	
	public float Perimeter(float length, float breadth)
	{
		float Perimeter = (length + breadth)*2;
		return Perimeter;
	}
	
	public boolean Square(float length, float breadth)
	{
		if(length == breadth)
		{
			return true;
		}
		
		return false;
	}
}

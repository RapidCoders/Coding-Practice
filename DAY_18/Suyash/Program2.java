/*
	Q.2 Write a program to find area of triangle.
	Input : Breadth :- 4
	        Height :- 13
	Output : Area of triangle is 26.
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter breadth");
		float breadth = sobj.nextFloat();
		System.out.println("Enter height");
		float height = sobj.nextFloat();
		
		AreaOfTriangle aobj = new AreaOfTriangle();
		float fRet = aobj.Area(breadth,height);
		System.out.println("Area of triangle is :"+fRet);
		
		sobj.close();
		
	}
}

class AreaOfTriangle
{
	public float Area(float breadth, float height)
	{
		float Area = (breadth*height)/2;
		
		return Area;
	}
}

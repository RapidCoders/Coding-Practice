/*
	Q.2 Write a program to find area of trapezium. First find height of trapezium and then calculate the area.
	Trapezium
	
	Input  : a=3, b=4, c=6, d=5, h=6
	Output : Area of Trapezium is: 21
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter value of base 1");
		int b1 = sobj.nextInt();
		System.out.println("Enter base 2");
		int b2 = sobj.nextInt();
		System.out.println("Enter height");
		int h = sobj.nextInt();
		
		AreaOfTrapezium aobj = new AreaOfTrapezium();
		System.out.println(aobj.Area(b1, b2, h));
		
		sobj.close();
	}
}

class AreaOfTrapezium
{
	public float Area(int b1, int b2, int h)
	{
		return 0.5f*(b1+b2)*h;
	}
}

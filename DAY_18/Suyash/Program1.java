/*
	Q.1 Write a program to which accept radius(cm) of circle from the user and give circumference of circle.
	Input : 5.5
	Output : 34.54
	
	Input: -3
	Output: Invalid input.
	
	Author: Vaibhav

*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter radius of circle");
		float radius = sobj.nextFloat();
		
		Circumference cobj = new Circumference();
		float fRet = cobj.Circle(radius);
		if(fRet == -1)
		{
			System.out.println("Invalid input");
		}
		else
		{
			System.out.println("Circumference of circle is : "+fRet);
		}
		
		sobj.close();
	}
}
class Circumference
{
	public float Circle(float radius)
	{
		float circum = 0.0f;
		if(radius < 0)
		{
			return -1;
		}
		else
		{
			circum = 2*3.14f*radius;
		}
		
		return circum;
	}
}

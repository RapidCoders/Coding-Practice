package com.Day46;
/*
	Q.2 Write a program to find the area and perimeter of the semicircle.
	Input  : 10
	Output : Area : 157
	         Perimeter : 51.4
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the radius");
		float radius = sobj.nextFloat();
		
		AreaAndPerimeterOfSemicircle aobj = new AreaAndPerimeterOfSemicircle();
		float result = aobj.CalcArea(radius);
		System.out.println("Area is : "+result);
		result = aobj.CalcPerimeter(radius);
		System.out.println("Perimeter is : "+result);
		
		sobj.close();
	}
}

class AreaAndPerimeterOfSemicircle 
{
	public float CalcArea(float radius)
	{
		float Area = 0.5f * (3.14f * (radius*radius));
		return Area;
	}
	
	public float CalcPerimeter(float radius)
	{
		float Perimeter = (3.14f * radius) + (2*radius);
		return Perimeter;
	}
}

/*
	Q.2 Program to Convert meter to Feet and Inches.
	Input  : 40
	Output : The value of 40 meter in Inches is:  1574.80
	         The value of 40 meter in feet is: 131.24
	
	Input  : 10
	Output : The value of 10 meter in Inches is: 393.7
	         The value of 10 meter in Feet is: 32.81
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter value to convert");
		float num = sobj.nextInt();
		
		ConvertMtoFandI cobj = new ConvertMtoFandI();
		float Feet = cobj.ConvertToFeet(num);
		float Inch = cobj.ConvertToInches(num);
		
		System.out.println("The value of "+num+" meter in Inches is: "+Inch);
		System.out.println("The value of "+num+" meter in Feet is: "+Feet);
		
		sobj.close();
	}
}

class ConvertMtoFandI
{
	public float ConvertToFeet(float num)
	{
		float Feet = 3.281f * num;
		
		return Feet;
	}
	
	public float ConvertToInches(float num)
	{
		float Inch = 39.37f * num;
		
		return Inch;
	}
}

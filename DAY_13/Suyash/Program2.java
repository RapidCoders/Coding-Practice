/*
	Q.2 Program to perform user defined operation such as Addition, Subtraction, Multiplication, Division, suing Switch case.
	
	Option 1 - Addtion 
	Option 2 - Subtraction
	Option 3 - Multiplication
	Option 4 - Division
	Take user defined input and Option and perform operation
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Please select an option");
		System.out.println("1) Addition");
		System.out.println("2) Subtraction");
		System.out.println("3) Multiplication");
		System.out.println("4) Division");
		
		int Choice = sobj.nextInt();
		
		Arithmetic aobj = new Arithmetic();
		aobj.Operation(Choice);
		
		sobj.close();
	}	
}

class Arithmetic
{
	public void Operation(int Choice)
	{
		Scanner sobj = new Scanner(System.in);
		
		switch(Choice)
		{
		case 1: 
			System.out.println("Enter 1st digit");
			int No1 = sobj.nextInt();
			System.out.println("Enter 2nd digit");
			int No2 = sobj.nextInt();
			
			int add = No1+No2;
			System.out.println("Addition is :"+add);
			break;
		
		case 2:
			System.out.println("Enter 1st digit");
			int No3 = sobj.nextInt();
			System.out.println("Enter 2nd digit");
			int No4 = sobj.nextInt();
			
			int sub = No3-No4;
			System.out.println("Subtraction is :"+sub);
			break;
			
		case 3:
			System.out.println("Enter 1st digit");
			int No5 = sobj.nextInt();
			System.out.println("Enter 2nd digit");
			int No6 = sobj.nextInt();
			
			int mul = No5*No6;
			System.out.println("Multiplication is :"+mul);
			break;
			
		case 4:
			System.out.println("Enter 1st digit");
			int No7 = sobj.nextInt();
			System.out.println("Enter 2nd digit");
			int No8 = sobj.nextInt();
			
			float div = No7/No8;
			System.out.println("Division is :"+div);
			break;
			
		default: System.out.println("You have entered wrong choice");
		
		}	
		
		sobj.close();
	}
}

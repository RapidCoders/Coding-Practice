/*
	Q.2 Write a program to calculate simple interest.
	Input  : P = 10000
	         R = 5
	         T = 5
	Output : 2500
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.print("Enter Principle amount : ");
		int p = sobj.nextInt();
		System.out.print("Enter Rate of interest : ");
		int r = sobj.nextInt();
		System.out.println("Enter Time in years : ");
		int t = sobj.nextInt();
		
		SimpleInteresr iobj = new SimpleInteresr();
		float result = iobj.CalcSI(p, r, t);
		System.out.println(result);
		
		sobj.close();
	}
}

class SimpleInteresr
{
	public float CalcSI(int p, int r, int t)
	{
		float SI = (p*r*t)/100;
		return SI;
	}
}

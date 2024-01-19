package com.Day49;
/*
	Q.2 Write a program to convert USD to INR
	Input  : 10
	Output : 831.06
	
	Input  : 750
	Output : 62329.31
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter amount in USD");
		double USD = sobj.nextDouble();
		
		USDtoINR uobj = new USDtoINR();
		double INR = uobj.ConvertUDStoINR(USD);
		System.out.println(INR);
		
		sobj.close();
	}
}
class USDtoINR
{
	public double ConvertUDStoINR(double USD)
	{
		double INR = USD * 83.11;
		return INR;
	}
}

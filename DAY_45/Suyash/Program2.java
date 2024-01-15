package com.Day45;
/*
	Q.2 Write a program to convert hours into minutes and seconds.
	Input  : Enter number of Hours : 2
	Output : Number of Minutes : 120
	         Number of Seconds : 7200
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of Hours");
		int hours = sobj.nextInt();
		
		HoursToMinutesAndSeconds hobj = new HoursToMinutesAndSeconds();
		hobj.Convert(hours);
		
		sobj.close();
	}
}
class HoursToMinutesAndSeconds
{
	public void Convert(int Hours)
	{
		int Minutes = Hours * 60;
		int Seconds = Hours * 3600;
		
		System.out.println("Number of minutes : "+Minutes);
		System.out.println("Number of seconds : "+Seconds);
	}
}

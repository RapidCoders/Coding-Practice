/*
	Q.3 Write a program which accept decimal number and covert it into binary.
	Input :n = 24
	Output : 11000
	Input :n = 11
	Output : 1011
	
	Author: Shreyash
*/

import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number that you want to convert to binary");
		int iNo = sobj.nextInt();
		
		DecimalToBinary dobj = new DecimalToBinary();
		dobj.BinaryConversion(iNo);
	}
}

class DecimalToBinary
{
	public void BinaryConversion(int iNo)
	{
		int binary[] = new int[40];
		int index = 0;
		
		while(iNo > 0)
		{
			binary[index++] = iNo%2;
			iNo = iNo/2;
		}
		
		System.out.print("Binary number is : ");
		for(int i=index-1; i>=0; i--)
		{
			System.out.print(binary[i]);
		}
	}
}

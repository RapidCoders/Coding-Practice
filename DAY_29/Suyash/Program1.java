/*
	Q.1 Write a program that takes a string as input and reverses the order of words in the string.
	The input and output of funtion should be string type
	
	Input: "Hello World"
	Output: "World Hello"
	
	Input: "Programming is fun"
	Output: "fun is Programming"
	
	Author: Vaibhav
*/

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sobj.nextLine();
		
		ReverseOrderOfWords robj = new ReverseOrderOfWords();
		String newStr = robj.ReverseOrder(str);
		System.out.println(newStr);
		
		sobj.close();
	}
}

class ReverseOrderOfWords
{
	public String ReverseOrder(String str)
	{	
		String words[] = str.split(" ");
		String revStr = "";
		
		for(int i=words.length-1; i>=0; i--)
		{
			revStr = revStr + words[i] + " ";
		}
		
		return revStr;
	}
}

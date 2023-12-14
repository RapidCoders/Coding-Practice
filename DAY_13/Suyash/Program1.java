/*
	Q.1 Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
	Input : "Marvellous Multi OS"
	Input : M
	Output : 0
	
	Input : "Marvellous Multi OS"
	Input : W
	Output : -1
	
	Input : "Marvellous Multi OS"
	Input : e
	Output : 4
	
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
		
		System.out.println("Enter character that you want to find");
		char ch = sobj.next().charAt(0); 
		
		FirstOccourence fobj = new FirstOccourence();
		int iRet = fobj.Occourence(str, ch);
		
		if(iRet == -1)
		{
			System.out.println("Character not present");
		}
		else
		{
			System.out.println("Character present at index : "+iRet);
		}
		
		sobj.close();
	}
}

class FirstOccourence 
{
	public int Occourence(String str, char ch)
	{
		int i = 0;
		for(i=0; i<str.length()-1; i++)
		{
			if(str.charAt(i)== ch)
			{
				return i;
			}
		}
		return -1;
	}
}

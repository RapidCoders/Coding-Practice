/*
	Q.3 Write program program to remove brackets (),{},[] from an algebraic expression.
	
	Input: a+b(/(c*c
	Output:a+b/c*c
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter an algebraic expression");
		String str = sobj.next();
		
		RemoveBrackets robj = new RemoveBrackets();
		String newStr = robj.Remove(str);
		System.out.println(newStr);
		
		sobj.close();
	}
}

class RemoveBrackets
{
	public String Remove(String str)
	{
		String newStr = "";;
		
		for(int i=0; i<str.length(); i++)
		{
			if(str.charAt(i) != '(' && str.charAt(i) != ')' && str.charAt(i) != '{' && str.charAt(i) != '}' && str.charAt(i) != '[' && str.charAt(i) != ']')
			{
				newStr = newStr+str.charAt(i);
			}
		}
		
		return newStr;
	}
}

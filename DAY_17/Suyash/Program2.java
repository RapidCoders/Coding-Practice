/*
	Q.2 K Shape Character Pattern Program.
	
	A B C D E F 
	A B C D E 
	A B C D 
	A B C 
	A B 
	A 
	A 
	A B 
	A B C 
	A B C D 
	A B C D E 
	A B C D E F
	
	Author: Suyash
*/

public class Program2 
{
	public static void main(String[] args)
	{
		PatternPrinting pobj = new PatternPrinting();
		pobj.Pattern();
	}
}

class PatternPrinting
{
	public void Pattern()
	{	
		for(int i=6; i>=1; i--)
		{
			char ch = 'A';
			for(int j=1; j<=i; j++,ch++)
			{
				System.out.print(ch+" ");
			}
			System.out.println();
		}
		for(int i=1; i<=6; i++)
		{
			char ch = 'A';
			for(int j=1; j<=i; j++,ch++)
			{
				System.out.print(ch+" ");
			}
			System.out.println();
		}
	}
}

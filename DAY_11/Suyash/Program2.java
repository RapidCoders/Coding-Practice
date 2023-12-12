/*
	Q.2 Program to count the total number of vowels and consonants in a string.
	(vowels = a, e, i, o, u)
	(consonants = b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z)
	
	Input: This is a really simple sentence
	Output: Number of vowels: 10
	        Number of consonants: 17
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sobj.nextLine();
		
		ChkVowelConstant cobj = new ChkVowelConstant();
		cobj.ChkVowelConstant(str);
		
		sobj.close();
	}
}

class ChkVowelConstant
{
	public void ChkVowelConstant(String str)
	{
		int countVowel = 0;
		int countConst = 0;
		
		for(int i=0; i<str.length();i++)
		{
			if(str.charAt(i)=='a'||str.charAt(i)=='A'||str.charAt(i)=='e'||str.charAt(i)=='E'||str.charAt(i)=='i'||
			   str.charAt(i)=='I'||str.charAt(i)=='o'||str.charAt(i)=='O'||str.charAt(i)=='u'||str.charAt(i)=='U')
			{
				countVowel = countVowel + 1;
			}
			else if((str.charAt(i)>='A' && str.charAt(i)<='Z')||(str.charAt(i)>='a' && str.charAt(i)<='z'))
			{
				countConst = countConst + 1;
			}
		}
		
		System.out.println("Number of vowels : "+countVowel);
		System.out.println("Number of constatns : "+countConst);
	}
}

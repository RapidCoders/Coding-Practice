/*
	Q.1 Write a program to ckeck if a string is an anagram of another string.
	An anagram is a word or phrase formed by rearranging the letters of another.
	
	Input 1: "listen"
	Input 2: "silent"
	Output: True
	
	Input 1: "debit card"
	Input 2: "bad credit"
	Output: True
	
	Input 1: "Race"
	Input 2: "care"
	Output: True
	
	Input 1: " listen"
	Input 2: "silent "
	Output: True
	
	Input 1: "hello"
	Input 2: "world"
	Output: False
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter 1st String");
		String str1 = sobj.nextLine();
		System.out.println("Enter 2nd String");
		String str2 = sobj.nextLine();
		
		AnagramString aobj = new AnagramString();
		boolean bRet = aobj.ChkAnagram(str1, str2);
		
		if(bRet == true)
			System.out.println("Anagram");
		else
			System.out.println("Not Anagram");
		
		sobj.close();
	}
}

class AnagramString 
{
	public boolean ChkAnagram(String str1, String str2)
	{
		//call LowerCase function to convert string to Lower case
		str1 = LowerCase(str1);
		str2 = LowerCase(str2);
		
		//call RemoveSpecialChar function to remove all special characters and white spaces
		str1 = RemoveSpecialChar(str1);
		str2 = RemoveSpecialChar(str2);
		
		//Call Sorting function
		str1 = Sorting(str1);
		str2 = Sorting(str2);
		
		if(str1.equals(str2))
		{
			return true;
		}
		return false;
		
	}
	
	public String LowerCase(String str)
	{
		char ch[] = str.toCharArray();
		
		for(int i=0; i<ch.length; i++)
		{
			if(ch[i] >='A' && ch[i]<='Z')
			{
				ch[i] = (char) (ch[i] + 32);
			}
		}
		
		String newStr = new String(ch);
		
		return newStr;
	}
	
	public String RemoveSpecialChar(String str)
	{
		char ch[] = str.toCharArray();
		String newStr = "";
		
		for(int i=0; i<ch.length; i++)
		{
			if((ch[i] >= 'a' && ch[i] <= 'z')||(ch[i] >='0' && ch[i] <='9'))
			{
				newStr = newStr+ch[i];
			}
		}
		
		return newStr;
	}
	
	public String Sorting(String str)
	{
		char ch[] = str.toCharArray();

		char temp = 0;
		for(int i=0; i<ch.length; i++)
		{
			for(int j=0; j<ch.length; j++)
			{
				if(ch[j] > ch[i])
				{
					temp = ch[i];
					ch[i] = ch[j];
					ch[j] = temp;
				}
			}
		}
		
		//convert char array to string
		String newStr = new String(ch);
		
		return newStr;
	}
}

/*
	Q.1 Write a program that takes a string as input and replaces all consonants with a specified character, while keeping vowels unchanged.
	Input: "Hello, World!", replacement = '@'
	Expected Output: "@e@@o, @o@@@!"
	
	Input: "BCDFGHJKLMNPQRSTVWXYZ", replacement = '-'
	Expected Output: "---------------------"
	
	Input: "aeiou", replacement = '*'
	Expected Output: "aeiou"
	
	Input: "", replacement = '*'
	Expected Output: ""
	
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
		System.out.println("Enter character to be replaced with");
		char c = sobj.next().charAt(0);
		
		ReplaceConstant robj = new ReplaceConstant();
		String newStr = robj.replaceConsonants(str, c);
		System.out.println(newStr);
		
		sobj.close();
	}
}

class ReplaceConstant
{
	public String replaceConsonants(String input, char replacement) 
	{
        if (input.isEmpty()) 
        {
            return "";
        }

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < input.length(); i++) 
        {
            char currentChar = input.charAt(i);

            if (isConsonant(currentChar)) 
            {
                result.append(replacement);
            } 
            else 
            {
                result.append(currentChar);
            }
        }

        return result.toString();
    }

    public boolean isConsonant(char c) 
    {
        return Character.isLetter(c) && !isVowel(Character.toLowerCase(c));
    }

    public boolean isVowel(char c) 
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }	
}

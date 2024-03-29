/*
	Q.3 Write a program to check the number is ISBN Number or not.
	Explanation :
	Number1: 8147852369
	
	Sum = (1*9) + (2*6) + (3*3) + (4*2) + (5*5) + (6*8) + (7*7) + (8*4) + (9*1) + (10*8)
	Sum = 9 + 12 + 9 + 8 + 25 + 48 + 49 + 32 + 9 + 80
	Sum = 281
	Now, we divide the sum with 11 and check whether the remainder is 0 or not. If the remainder is 0, the number is a legal ISBN.
	rem = 281 % 11
	rem = 6 != 0
	
	Number 8147852369 is not a legal ISBN because the remainder is not equal to the 0.
	
	Number2: 1259060977
	Sum = (1*10) + (2*9) + (5*8) + (9*7) + (0*6) + (6*5) + (0*4) + (9*3) + (7*2) + (7*1)
	Sum = 10 + 18 + 40 + 63 + 0 + 30 + 0 + 27 + 14 + 7
	Sum = 209
	Now, we divide the sum with 11 and check whether the remainder is 0 or not.
	rem = 209 % 11
	rem = 0
	Number 1259060977 is a legal ISBN because the remainder is equal to 0.
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		long num = sobj.nextLong();
		
		ISBNnumber iobj = new ISBNnumber();
		System.out.println(iobj.checkISBN(num));
		
		sobj.close();
	}
}

class ISBNnumber
{
	public boolean checkISBN(long isbn) 
	{
        String isbnString = String.valueOf(isbn);

        if (isbnString.length() != 10) 
        {
            return false;
        }

        int sum = 0;
        for (int i = 0; i < 10; i++) 
        {
            int digit = Character.getNumericValue(isbnString.charAt(i));
            sum += (i + 1) * digit;
        }

        return sum % 11 == 0;
	}
}

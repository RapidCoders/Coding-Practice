/*
	Q.3 Write a Program which accept number and check whether it is Automorphic Number or Not.
	Input : num = 5
	Output : True
	Explaination: 5^2 = 25
	Square ends in the same digit as the number itself.
	
	Input : num = 7
	Output : False
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int iNo = sobj.nextInt();
		
		AutomorphicNumber aobj = new AutomorphicNumber();
		boolean bRet = aobj.Automorphic(iNo);
		if(bRet == true)
		{
			System.out.println("It is automorphic number");
		}
		else
		{
			System.out.println("It is not automorphic number");
		}
		
		sobj.close();
	}
}

class AutomorphicNumber 
{
	public boolean Automorphic(int iNo)
	{
		int sqr = iNo*iNo;
		
		while(sqr != 0 || iNo != 0)
		{
			if(iNo == 0)
				break;
			
			if(sqr%10 != iNo%10)
				return false;
			
			sqr = sqr/10;
			iNo = iNo/10;
		}
		
		return true;
	}
}

/*
	Q.2 Program to check whether number is pronic or not.
	A number is said to be pronic number if it is a product of two consecutive numbers.
	
	For examples:
	6 = 2 x 3
	72 = 8 x 9
	
	Input : 6
	Output : It is a pronic number
	
	Input : 7
	Output : It is not a pronic number
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int iNo = sobj.nextInt();
		
		PronicNumber pobj = new PronicNumber();
		boolean bRet = pobj.Pronic(iNo);
		
		if(bRet == true)
		{
			System.out.println("It is a pronic number");
		}
		else
		{
			System.out.println("It is not a  pronic number");
		}
		
		sobj.close();
	}
}

class PronicNumber
{
	 public boolean Pronic(int iNo)
	 {
		 int flag = 0;
		 
		 if(iNo == 0)
		 {
			 return true;
		 }
		 else
		 {
			 for(int i=1; i<=iNo/i; i++)
			 {
				 System.out.println(i);
				 if((i*(i+1))==iNo)
				 {
					 flag = 1;
					 break;
				 }
			 } 
		 }
		 
		 if(flag == 1)
		 {
			 return true;
		 }
		 else
		 {
			 return false;
		 }
	 }
}

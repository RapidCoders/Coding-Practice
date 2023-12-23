/*
	Q.2 Write program which accept number and print that many prime numbers .
	Example : 
	Input : Number = 5
	Output : 2,3,5,7,11
	
	Input : Number = 7
	Output : 2,3,5,7,11,13,17
	
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
		
		AvgOfPrimeNos aobj = new AvgOfPrimeNos();
		aobj.Average(iNo);		
		sobj.close();
	}
}

class AvgOfPrimeNos 
{
	public void Average(int iNo)
	{
		int count=0,n=0,j=0,i=0;  
		
		while(n<iNo)  
		{  
			j=1;  
			count=0;
			
			while(j<=i)  
			{  
				if(i%j==0)  
					count = count+1;  
				j++;   
			}  
			if(count==2)  
			{  
				System.out.print(i+" ");
				n++;  
			}  
			i++;  
		}
	}  
}

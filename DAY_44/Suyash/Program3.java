/*
	Q.3 write Recursive program to print fibonacci series.
	
	Input: n = 15
	Output: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int No = sobj.nextInt();
		
		RecusrsiveFibonacci robj = new RecusrsiveFibonacci();
		robj.printFibonacci(No-2);
		
		sobj.close();
	}
}

class RecusrsiveFibonacci
{		    
	public void printFibonacci(int count)
	{   
		int n1=0,n2=1,n3=0; 
		System.out.print(n1+" "+n2);
		
	    if(count>0)
	    {    
	        n3 = n1 + n2;    
	        n1 = n2;    
	        n2 = n3;    
	        System.out.print(" "+n3);   
	        printFibonacci(count-1);    
	    }
	}    
}

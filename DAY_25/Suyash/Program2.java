/*
	Q.2 Program to calculate the addition of 2 matrices.
	Input:
	Matrix a = [1, 0, 1]  
	           [4, 5, 6]  
	           [1, 2, 3]  
	   
	matrix b = [1, 1, 1]  
	           [2, 3, 1]  
	           [1, 5, 1]  
	
	Output:
	Addition of two matrices: [2 1 2]
	                          [6 8 7]
	                          [2 7 4]
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows and columns for the matrices:");
        int rows = sobj.nextInt();
        int columns = sobj.nextInt();

        //Input for first matrix 
        System.out.println("Enter the elements of the first matrix:");
        int matrixA[][]  = new int[rows][columns];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++) 
            {
                matrixA[i][j] = sobj.nextInt();
            }
        }
        
        //Input for second matrix
        System.out.println("Enter the elements of the second matrix:");
        int matrixB[][] =  new int[rows][columns];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++) 
            {
                matrixB[i][j] = sobj.nextInt();
            }
        }
        
        
        AdditionOfMetrices aobj = new AdditionOfMetrices();
        aobj.Addition(matrixA, matrixB, rows, columns);

        sobj.close();
    }
}

class AdditionOfMetrices
{
	public void Addition(int matrixA[][], int matrixB[][], int rows, int columns)
	{
        int resultMatrix[][] = new int[rows][columns];

        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < columns; j++) 
            {
                resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            }
        }
        
        
        System.out.println("Addition of matrices is : ");
        for(int i=0; i<rows; i++)
        {
        	for(int j=0; j<columns; j++)
        	{
        		System.out.print(resultMatrix[i][j]+" ");
        	}
        	System.out.println();
        }
	}
}

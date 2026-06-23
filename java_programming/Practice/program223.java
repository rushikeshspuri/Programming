/*
    iRow = 
    iCol = 

    *	
    *	*	
    *	*	*	
    *	*	*	*
   
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        if(iRow != iCol)
        {
            System.out.println("Invalid Parameters");
            System.out.println("Number of rows and columns should be same");
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= i; j++)
            {
                System.out.print("*\t");
            }

            System.out.println();   // New line after every row
        }
    }
}

class program223
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);

        sobj.close();
    }
}
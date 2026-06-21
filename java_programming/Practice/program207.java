/*
    iRow = 4
    iCol = 4

    a   b   c   d
    1   2   3   4
    a   b   c   d
    1   2   3   4
*/

import java.util.*;
class Pattern
{
    public void Display(int iRow , int iCol)
    {
        int i = 0 , j = 0;
        int iCount = 0;
    
        
        for(i = 4 , iCount = iRow ; i <= 1; i++ , iCount--)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(iCount+"/t");
            }    
            System.out.println();
        }
    }
}
class program207
{
    public static void main(String A[]) 
    { 
        int iValue1 = 0, iValue2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        iValue1 =  sobj.nextInt();

        System.out.println("Enter number of column");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);

        sobj.close();
    }
}
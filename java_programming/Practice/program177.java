import java.util.*;

class program177
{
    public static void Display(int iNo)
    {
        int iCnt = 0; int iCount = 1;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
           if(iCnt % 2 == 0)
            {
                System.out.print("*\t");
            }
           else
            {
                System.out.print(iCount+"\t");
                iCount++;
            }
        }
        
        System.out.println();
    }
    public static void main(String A[]) 
    {
        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter the number of elements");
        
        int iValue  = 0;
        iValue = sobj.nextInt();

        Display(iValue);
    }    
}

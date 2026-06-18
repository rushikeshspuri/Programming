// input : 11
// output : *   *    *   #   #   #   *   *   *  #    #

import java.util.*;

class program188
{
    public static void Display(int iNo)
    {
        int iCnt = 0; 
        char ch = '\0';
        char ch1 = '\0';

        for(iCnt = 1 ,ch = 'A', ch1 = 'a'; iCnt <= iNo; iCnt++, ch++,ch1++)
        {
            if(iCnt % 2  != 0)
            {
                System.out.print(ch+"\t");
            }
            else
            {
                System.out.print(ch1+"\t");
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

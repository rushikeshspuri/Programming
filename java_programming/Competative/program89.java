class Logic
{
    public void PrintOdd(int num)
    {   
        int iCnt = 0;
        for(iCnt = 1; iCnt <= num; iCnt++)   
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}    
class program89
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.PrintOdd(20);
    }    
}

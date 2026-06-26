class Logic
{
    public void CountEvenOdd(int num)
    {  
        int iCnt = 0 , iEven = 0 , iOdd = 0;

        for(iCnt = 0; iCnt < num ; iCnt++)
        {
            if(iCnt % 2 == 0) 
            {
                iEven++;
                
            }
            else
            {
                iOdd++;
            }
        }
        System.out.println(iEven+ ": Count of Even ,"+iOdd+ ": Count of Odd");
    }

    
}
class program104
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.CountEvenOdd(50);
    }    
}

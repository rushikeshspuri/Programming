class Logic
{
    public void countFactors(int num)
    {  
        int iCnt = 0 , iFact = 0;

        for(iCnt = 1; iCnt <= num ; iCnt++)
        {
            if(num % iCnt == 0 )
            {
                iFact++;
            }
        }
        System.out.println(iFact+": Count of Factors");
    
    }

    
}
class program106
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.countFactors(20);
    }    
}

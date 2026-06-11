class Logic
{
    public void displayFactors(int num)
    {  
        int iCnt = 0 , iFact = 0;

        for(iCnt = 1; iCnt <= num ; iCnt++)
        {
            if(num % iCnt == 0 )
            {
                iFact = iCnt;
                System.out.println(iFact);
            }
           
        }
    
    }

    
}
class program105
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.displayFactors(12);
    }    
}

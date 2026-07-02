class Logic
{
    public void SumEvenOdd(int num)
    {   
        int iCnt = 0 , iSum = 0 ;
        for(iCnt = 1; iCnt <= num; iCnt++)   
        {
            if(iCnt % 2 != 0)
            {
                iSum += iCnt;
            }
            else
            {
               iSum += iCnt;
            }
        } 
        
        System.out.println("Summation of even & odd : "+iSum);
}
}
class program90
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.SumEvenOdd(20);
    }    
}

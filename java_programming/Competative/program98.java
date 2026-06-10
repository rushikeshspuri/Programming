class Logic
{
    public void SumEvenNumbers(int num)
    {  
       int iCnt = 0 , iSum = 0;  
       
       for(iCnt = 1; iCnt <= num; iCnt++ )
       {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
       }
       System.out.println(iSum);
     
    }
    
}
class program98
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.SumEvenNumbers(20);
    }    
}

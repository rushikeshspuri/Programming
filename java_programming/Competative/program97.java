class Logic
{
    public void CalculatePower(int iBase , int iPower)
    {  
       int iCnt = 0;  
       double Power = 1;
       
       for(iCnt = 1; iCnt <= iPower; iCnt++ )
       {
            Power = Power * iBase;
       }
       System.out.println(Power);
    }
    
}
class program97
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.CalculatePower(2,5);
    }    
}

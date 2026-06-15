class Logic
{
    public void PerfectNumber(int num)
    {  
       int iCnt = 0 , iSum = 0;
       
       for(iCnt = 1; iCnt <= (num/2); iCnt++)
       {
           if(num % iCnt == 0)
           {
                iSum += iCnt;
           }
       }
       if(iSum == num)
       {
            System.out.println("Number is Perfect :"+num);
       }
       else
       {
            System.out.println("Number is not Perfect :"+num);
       }
    }
    
}
class program100
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.PerfectNumber(6);
    }    
}

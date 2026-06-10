class Logic
{
    public void CheckPrime(int num)
    {
        int iCnt = 0;
        
        if(num <= 1)
        {
            System.out.println("Number is not Prime");
            return;
        }
        
        for(iCnt = 2; iCnt < num; iCnt++)
        {
            if(num % iCnt == 0)
            {
                System.out.println("Number is not Prime");
                return;
            }
        }
            System.out.println("Number is Prime");
    }
}

class program87 
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.CheckPrime(11);
    }    
}

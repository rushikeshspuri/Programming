class Logic
{
    public void printDivisibleBy2and3(int num)
    {  
        int iCnt = 0;

        for(iCnt = 1; iCnt <= num ; iCnt++)
        {
            if(iCnt % 2 == 0 && iCnt % 3 == 0) 
            {
                System.out.println(iCnt);
            }
        }
        
    
    }

    
}
class program107
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.printDivisibleBy2and3(30);
    }    
}

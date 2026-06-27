class Logic
{
    public void PrintEven(int num)
    {   
        int iCnt = 0;
        
        for(iCnt = 1; iCnt <= num; iCnt++)   
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt); 
            }
        }
    }
}    
class program88
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.PrintEven(20);
    }    
}

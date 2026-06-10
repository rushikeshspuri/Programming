class Logic
{
    public void printReverse(int num)
    {  
       int iCnt = 0;
       
       for(iCnt = num; iCnt > 1; iCnt--)
       {
            System.out.println(iCnt);
       }
    }
    
}
class program99
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.printReverse(20);
    }    
}

class Logic
{
    public void FindLargestDigit(int num)
    {  
        int iDigit = 0; int iLarge = 0;
       
        while(num > 0)
        {
            iDigit = num % 10;
            
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            num = num / 10;
        }
        System.out.println(iLarge);
    }
    
}
class program101
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.FindLargestDigit(8539);
    }    
}

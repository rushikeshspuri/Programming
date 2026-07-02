class Logic
{
    public void SumEvenOddDigits(int num)
    {   
       int iSumEven = 0,iSumOdd = 0, iDigit = 0; ;
        
        while(num > 0)
        {
            iDigit = num % 10;
            if (iDigit % 2 == 0) 
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }
            num = num / 10;
        }

        System.out.println("Summation of Even Digit : "+iSumEven);
        System.out.println("Summation of Odd Digit : "+iSumOdd);
    }
}
class program91
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.SumEvenOddDigits(123456);
    }    
}

class Logic
{
    public void SumOfDigits(int num)
    {
        int iSum = 0 , iDigit = 0;
        while(num != 0)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;  
            num = num / 10;
        }

        System.out.println(iSum);
    }
}

class program82
{
    public static void main(String A[]) 
    {
        Logic lobj = new Logic();
        lobj.SumOfDigits(1234);
    }
}

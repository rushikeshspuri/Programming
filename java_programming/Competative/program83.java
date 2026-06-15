class Logic
{
    public void CheckPallindrome(int num)
    {
        int iDigit = 0 , iRev = 0 , iTemp = num;
        while(num != 0)
        {
            iDigit = num % 10;
            iRev = (iRev * 10) + iDigit;
            num = num / 10;
        }
        if(iRev == iTemp)
        {
            System.out.println("Pallindrome : " +iTemp);
        }
        else
        {
            System.out.println("Number is Not pallindrome");
        }
    }
}

class program83
{
    public static void main(String A[]) 
    {
        Logic lobj = new Logic();
        lobj.CheckPallindrome(121);
    }
}
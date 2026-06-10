class Logic
{
    public void CheckSign(int num)
    {  
        if(num < 0)
        {
            System.out.println("Number is Negative");
        }
        else if (num > 1)
        {
            System.out.println("Number is Positive");
        }
        else
        {
            System.out.println("Number is Zero");
        }
    }
}
class program92
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.CheckSign(-8);
    }    
}

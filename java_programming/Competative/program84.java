class Logic
{
    public void FindMax(int a ,int b)
    {
        if(a > b)
        {
            System.out.println("Greater Number is  : "+a);
        }
        else
        {
            System.out.println("Greater Number is  : "+b);
        }
    }
}

class program84
{
    public static void main(String A[]) 
    {
        Logic lobj = new Logic();
        lobj.FindMax(15,20);
    }
}
class Logic
{
    public void FindMin(int a, int b, int c)
    {
        if(a <= b && a <= c)
        {
            System.out.println("Smaller Number is  : "+a);
        }
        else if (b <= a && b <= c)
        {
            System.out.println("Smaller Number is  : "+b);
        }
        else 
        {
            System.out.println("Smaller Number is  : "+c);
        } 
    }
}

class program85
{
    public static void main(String A[]) 
    {
        Logic lobj = new Logic();
        lobj.FindMin(3,7,2);
    }
}

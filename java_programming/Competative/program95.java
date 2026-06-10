class Logic
{
    public void CheckDivisible(int num)
    {  
        if(num % 5 == 0 && num % 11 == 0)
        {
            System.out.println(num +": is Divisible by 5 & 11");
        }
    }
}
class program95
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.CheckDivisible(55);
    }    
}

class Logic
{
    public void LeapYear(int num)
    {  
        if(num % 4 == 0 && num % 100 != 0 || num % 400 == 0)
        {
            System.out.println(num +": is Leap Year");
        }   
        else
        {
             System.out.println(num +": is not Leap Year");
        }
    }
}
class program93
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.LeapYear(2024);
    }    
}

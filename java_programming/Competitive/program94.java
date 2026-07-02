class Logic
{
    public void DisplayGrade(int num)
    {  
        
        if (num >= 80) 
        {
            System.out.println("Grade is A");
        }
        else if (num >= 30) 
        {
            System.out.println("Grade is B");
        }
        else 
        {
            System.out.println("Grade is C / failed");
        }
    }

}
class program94
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.DisplayGrade(80);
    }    
}

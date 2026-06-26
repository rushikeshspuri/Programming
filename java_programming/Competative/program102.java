class Logic
{
    public void FindSmallestDigit(int num)
    {  
        int iDigit = 0; int iSmall = 9;
       
        while(num > 0)
        {   
            iDigit = num % 10;
            
            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }
            num = num / 10;
        }
        System.out.println(iSmall);
    }
    
}
class program102
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.FindSmallestDigit(8239);
    }    
}

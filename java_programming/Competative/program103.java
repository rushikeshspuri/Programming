class Logic
{
    public void ProductDigit(int num)
    {  
        int iDigit = 0; int iPro = 1;
       
        while(num > 0)
        {
            iDigit = num % 10;
            
            iPro = iPro * iDigit;
 
            num = num / 10;
        }
        System.out.println(iPro);
    }
    
}
class program103
{
    public static void main(String A[]) 
    {
        Logic lobj =  new Logic();
        lobj.ProductDigit(234);
    }    
}

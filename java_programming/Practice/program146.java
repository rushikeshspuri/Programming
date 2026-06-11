class ArrayX
{
   public static void Update(int Arr[],int iSize)
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
           Arr[iCnt]++; 
        }

    }  
}

class program146
{

    public static void main(String A[]) 
    {
        int Brr[] = {10,20,30,40,50};
        int iCnt = 0 ;
        
        System.out.println("Array before function call");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
        
       ArrayX.Update(Brr,5);
        
       System.out.println("Array After function call");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

    }
}

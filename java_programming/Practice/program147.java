import java.util.Scanner;

class ArrayX
{
   public void Update(int Arr[])
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           Arr[iCnt]++; 
        }

    }  
}

class program147
{

    public static void main(String A[]) 
    {
        int iCnt = 0 ;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of elements");
        int iLenght = sobj.nextInt();

        int Brr[] = new int[iLenght];

        System.out.println("Enter the elements");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }

        
        System.out.println("Array before function call");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        ArrayX aobj = new ArrayX();
        
       aobj.Update(Brr);
        
       System.out.println("Array After function call");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

    }
}

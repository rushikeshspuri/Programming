import java.util.*;

class ArrayX
{
    Scanner sobj = new Scanner(System.in);
    private int []Arr;
    private int iSize;

   public ArrayX()
    {
        this(5);
    }

    public ArrayX(int X)
    {
        this.iSize = X;
        Arr= new int [iSize]; 
    }

    public void Accept()
    {
        int iCnt = 0;

        System.out.println("Enter the elements");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of Array are : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int Summation()
    {
        int iSum = 0; int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}

class program170 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Elements");
        int iLenght = sobj.nextInt();
        
        ArrayX aobj = new ArrayX(iLenght);
        
        aobj.Accept();
        aobj.Display();
        
        int iRet = aobj.Summation();

        System.out.println("Summation is : " +iRet);

        sobj.close();

        System.gc();

    }   
}

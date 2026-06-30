import java.util.*;



class program276
{
    public static void main(String A[])
    {
        Scanner sobj  =  new Scanner(System.in);
        String data = null;
        progragram280 strobj = new progragram280(); // Error
        int iRet = 0;

        System.out.println("Enter string : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Number of Capital Character : "+iRet);

        iRet = strobj.CountSmall(data);

        System.out.println("Number of Small Character : "+iRet);

        iRet = strobj.CountDigits(data);

        System.out.println("Number of Digits are : "+iRet);

        iRet = strobj.CountSpace(data);

        System.out.println("Number of Space are : "+iRet);


        iRet = strobj.CountSpecial(data);

        System.out.println("Number of Special Symbols  : "+iRet);

        sobj.close();
    }    
}

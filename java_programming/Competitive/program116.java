import java.util.Scanner;
import java.io.*;
import java.util.zip.CRC32;


class CheckSum
{
    public void ChKSum(String str)
    {
        FileInputStream fobj;
        CRC32 cobj;
        int iRet = 0;

        try
        {
            fobj = new FileInputStream(str);
            cobj = new CRC32();

            iRet = fobj.read();

            while(iRet != -1)
            {
                cobj.update(iRet);
                iRet = fobj.read();
            }

            long CheckSum = cobj.getValue();
            System.out.print(CheckSum);

        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
    }
}

class program116
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        CheckSum cobj = new CheckSum();
    
        System.out.println("Enter file name : ");
        
        String name = sobj.nextLine();

        cobj.ChKSum(name);
        
        sobj.close();
    }
}

// fileInputstream -> read , fileOutputStream -> write

import java.io.*;
import java.util.Scanner;

class Copyx
{
    public void Copy(String old, String neew)
    {
        FileInputStream fobj1 = null;
        FileOutputStream fobj2 = null;

        int iRet = 0;

        try
        {
            fobj1 = new FileInputStream(old);
            fobj2 = new FileOutputStream(neew);     // if file exist -> copy , else create -> copy


            iRet = fobj1.read();    // read 0

            while(iRet != -1)
            {
                fobj2.write(iRet);
                iRet = fobj1.read();
            }

        }
        catch(Exception e)
        {
            System.out.println("File not found");
        }
        finally
        {
            try
            {
                if(fobj1 != null)
                {
                    fobj1.close();
                    System.out.println("Source file closed");
                }

                if(fobj2 != null)
                {
                    fobj2.close();
                    System.out.println("Destination file closed");
                }
            }
            catch(IOException e)
            {
                System.out.println("Unable to close the file");
            }
        }
    }
}

class program113 
{
    public static void main(String A[] ) 
    {
        Scanner sobj = new Scanner(System.in);
        Copyx obj = new Copyx();

        System.out.println("Enter the destination file :");
        String Dest = sobj.nextLine();

        System.out.println("Enter the new file name : ");
        String New = sobj.nextLine();

        obj.Copy(Dest, New);

        sobj.close();

    }
}

// name from user, open the file,Display the content

import java.util.Scanner;
import java.io.*;

class DisplayContentX
{
    FileInputStream fobj;
    int iRet = 0;

    public void Display(String str)
    {
        try
        {
            fobj = new FileInputStream(str);
            while(iRet != -1)
            {
                System.out.print((char)iRet);
                iRet = fobj.read();
            }
            
        }
        catch(Exception e)
        {
            System.out.println("File not found");
        }
        finally
        {
            if(fobj != null)
            {
                try
                {
                    fobj.close();
                }
                catch(IOException e)
                {
                    System.out.println("Unable to close file");
                }
                
            }
        }
    }
}

class program109
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name : ");
        String name = sobj.nextLine();

        DisplayContentX dobj = new DisplayContentX();

        dobj.Display(name);

        sobj.close();
    }
}
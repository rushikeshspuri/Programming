// name from user, open the file

import java.io.*;
import java.util.Scanner;

class Open
{
    FileInputStream fobj;

    public void open(String str)
    {
        try
        {
           fobj = new FileInputStream(str);
           System.out.println("File opened successfully");
        }
        catch(FileNotFoundException  e)
        {
            System.out.println("File does not exits");
        }
        finally
        {
            if(fobj != null)
            {   try
                {
                    fobj.close();
                    
                }
                catch(IOException e)
                {
                    System.out.println("Unable to close the file");
                }
            }
        }
       
    }
}

class program108
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the File Name : ");
        String name = sobj.nextLine(); // read string

        Open obj = new Open();

        obj.open(name);

        sobj.close();

    }
}
import java.io.*;
import java.util.Scanner;

class program662
{
    public static void main(String A[] ) 
    {  
        File fobj = null;
        boolean bRet = false;
        String Fname = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name ");
        Fname = sobj.nextLine();
        
        try
        {
            fobj = new File(Fname);

            bRet = fobj.exists();

            if(bRet == true)
            {
                fobj.delete();
                System.out.println("File gets successfully deleted");
            }
            else
            {   
                System.out.println("File not exists");
            }   
        }
        catch(Exception eobj)
        {
            System.out.println(eobj.getMessage());
        }

        sobj.close();
               
    }
}
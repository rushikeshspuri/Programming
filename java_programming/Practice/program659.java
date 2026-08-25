import java.io.*;

class program659
{
    public static void main(String A[] ) 
    {  
        try
        {
            boolean bRet = false;

            File fobj = new File("Demo.txt");
            bRet = fobj.exists();

            if(bRet == true)
            {
                System.out.println("File already exists");
            }
            else
            {
                fobj.createNewFile();   
                System.out.println("File gets successfully created");
            }
           
        }
        catch(IOException iobj)
        {
            System.out.println(iobj.getMessage());
        }
        catch(Exception eobj)
        {
            System.out.println(eobj.getMessage());
        }
               
    }
}
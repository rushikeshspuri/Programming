import java.io.*;

class program665
{
    public static void main(String A[] ) 
    {  
        FileWriter fwobj = null;

        try
        {
            fwobj = new FileWriter("Demo.txt");
            fwobj.write("Jay Ganesh...");
             fwobj.close();
        }   
        catch(IOException eobj)
        {
            System.out.println(eobj.getMessage());
        }
        finally
        {
           
        }

    }

        
}
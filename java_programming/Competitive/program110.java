import java.util.Scanner;
import java.io.*;

class FileIO
{
    FileOutputStream fobj;

    public void writeX(String str , String data)
    {
        try
        {
            fobj = new FileOutputStream(str,true);
            
            System.out.println("File gets opened successfully ");
            
            fobj.write(data.getBytes());
            
            System.out.println("dara written successfully ");

        }
        catch(Exception e)
        {
            System.out.println("FIle not found");
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
                    System.out.println("Cannot close file");
                }
            }
        }
    }
}

class program110 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        FileIO obj = new FileIO();

        System.out.println("Enter file name : ");
        String name  = sobj.nextLine();

        System.out.println("Enter the data : ");
        String data = sobj.nextLine();

        obj.writeX(name, data);

        sobj.close();
    }
}

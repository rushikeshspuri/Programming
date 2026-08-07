import java.util.Scanner;
import java.io.*;

class program111
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String name  = sobj.nextLine();

        File fobj = new File(name);

        try
        {
            if(fobj.createNewFile())
            {
                System.out.println("File gets successfully created ");
            }
            else
            {
                System.out.println("File already exist");
            }
        }
        catch(Exception e)
        {
            System.out.println("An error occurred while creating the file.");
        }
        
        sobj.close();
    }
}

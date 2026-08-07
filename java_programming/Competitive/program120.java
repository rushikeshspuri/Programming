import java.util.Scanner;
import java.io.*;

class DirectoryX
{
    File fobj; 
    FileOutputStream fobj1;
    String Arr[];
    int i = 0;

    public void dirope(String name)
    {
        fobj = new File(name);
       

        if(fobj.isDirectory())
        {
            try
            {
                fobj1 = new FileOutputStream("Marvellous.txt");
            }
            catch(Exception e)
            {
                System.out.println(e.getMessage());
            }
        
            Arr = fobj.list();

            for(i = 0; i < Arr.length; i++)
            {
                File temp = new File(fobj, Arr[i]);

                try
                {
                    fobj1.write((Arr[i] + ":" + temp.length() + "Bytes" + "\n").getBytes());
                }
                catch(Exception e)
                {
                    System.out.println(e.getMessage());
                }
                
            }

        }
        else
        {
            System.out.println("Directory doesnt exist");
        }

        try
        {
            fobj1.close();
        }
        catch(Exception e)
        {
            System.out.println(e.getMessage());
        }

    }

}

class program120
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        DirectoryX dobj = new DirectoryX();

        System.out.println("Enter directory name : ");
        String dir = sobj.nextLine();

        dobj.dirope(dir);

        sobj.close();
    }
}

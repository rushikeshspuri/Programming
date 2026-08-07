import java.util.Scanner;
import java.io.*;

class DirectoryX
{
    File fobj;
    String Arr[];
    int i = 0;

    public void dirope(String name)
    {
        fobj = new File(name);

        if(fobj.isDirectory())
        {
            Arr = fobj.list();

            System.out.println("Names of regular files : ");

            for(i = 0; i < Arr.length; i++)
            {
                File temp = new File(fobj, Arr[i]);

                if(temp.isFile())
                {
                    System.out.println(Arr[i]);
                }
            }
        }
        else
        {
            System.out.println("Directory doesnt exist");
        }
    }
}

class program118
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
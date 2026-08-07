import java.util.Scanner;
import java.io.*;

class DirectoryX
{
    File fobj; 
    String Arr[];
    int Brr[];
    int i = 0;

    public void dirope(String name)
    {
        fobj = new File(name);

        if(fobj.isDirectory())
        {
            Arr = fobj.list();

            for(i = 0; i < Arr.length; i++)
            {
                File temp = new File(fobj, Arr[i]);
                System.out.println(Arr[i] + " : " + temp.length() + " bytes");
            }

        }
        else
        {
            System.out.println("Directory doesnt exist");
        }

    }

}

class program117 
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

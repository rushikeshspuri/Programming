import java.util.Scanner;
import java.io.*;

class program112 
{
    public static void main(String A[] ) 
    {
        Scanner sobj = new Scanner(System.in);
        String Arr [];
        int i = 0;

        System.out.println("Enter the directory");
        String dir = sobj.nextLine();

        File fobj = new File(dir);

        if(fobj.isDirectory())
        {
            Arr = fobj.list();

            for(i = 0; i < Arr.length; i++)
            {
                System.out.println(Arr[i]);
            }
        }
        else
        {
            System.out.println("Directory doesnt exist");
        }

        sobj.close();

    }
}

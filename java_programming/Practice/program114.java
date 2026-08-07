import java.util.Scanner;
import java.io.*;

class program114 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        

        System.out.println("Enter File name : ");
        String name = sobj.nextLine();

        File fobj = new File(name);

        if(fobj.isFile())
        {
            System.out.println("This file is regular file");
        }
        else
        {
            System.out.println("This file is not regular file");
        }

        sobj.close();
    }
}

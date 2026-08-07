import java.util.Scanner;
import java.io.*;

class program115
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        

        System.out.println("Enter directory name : ");
        String name = sobj.nextLine();

        File fobj = new File(name);

        if(fobj.mkdir())
        {
            System.out.println("Directory created successfully");
        }
        else
        {
            System.out.println("Directory not created ");
        }
        

        sobj.close();
    }
}

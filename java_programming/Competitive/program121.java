import java.util.Scanner;
import java.io.*;

class DirectoryX
{
    File fobj;
    String Arr[];
    int i = 0;

    public void dirope(String name) throws IOException
    {
        fobj = new File(name);

        if(fobj.isDirectory())
        {
            Arr = fobj.list();

            FileWriter fwobj = new FileWriter("Marvellous.txt");

            for(i = 0; i < Arr.length; i++)
            {
                File temp = new File(fobj, Arr[i]);

                if(temp.isFile())
                {
                    fwobj.write("File Name : " + Arr[i] + "\n");
                    fwobj.write("File Data : \n");

                    FileReader frobj = new FileReader(temp);
                    int ch = 0;

                    while((ch = frobj.read()) != -1)
                    {
                        fwobj.write((char)ch);
                    }

                    frobj.close();
                    fwobj.write("\n---------------------------\n");
                }
            }

            fwobj.close();
            System.out.println("Marvellous.txt created successfully");
        }
        else
        {
            System.out.println("Directory doesnt exist");
        }
    }
}

class program121
{
    public static void main(String[] args) throws IOException
    {
        Scanner sobj = new Scanner(System.in);
        DirectoryX dobj = new DirectoryX();

        System.out.println("Enter directory name : ");
        String dir = sobj.nextLine();

        dobj.dirope(dir);

        sobj.close();
    }
}
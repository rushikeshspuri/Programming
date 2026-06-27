import java.util.*;

class program263
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        System.out.println("Entered String : "+Arr);
        
        // Arr.length method give the string length and it is a method & in array it is property
        System.out.println("length of String is : "+Arr.length());
       

        sobj.close();
    }
}    


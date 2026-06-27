import java.util.*;

class program264
{
    public static void main(String a[]) 
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter String : ");
        Arr = sobj.nextLine();

        System.out.println("Entered String : "+Arr);
        
        
        System.out.println("length of String is : "+Arr.length());
        
        int i = 0;

        for(i = 0 ; i < Arr.length(); i++)
        {
            System.out.println(Arr.charAt(i));
        }

        sobj.close();
    }
}    


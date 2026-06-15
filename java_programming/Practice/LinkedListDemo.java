import java.util.*;     // For Collection

class LinkedListDemo
{
    public static void main(String A[]) 
    {
        LinkedList <Integer> lobj = new LinkedList <Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);
        lobj.add(111);

        System.out.println(lobj);

        if(lobj.contains(51))
        {
            System.out.println("51 is present");
        }
        else
        {
            System.out.println("There is NO 51 is LinkedList");
        }

        Iterator iobj = lobj.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
    }
}

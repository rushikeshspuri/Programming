class node
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL 
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        System.out.println("Inside Constructor");
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = null;
        temp = first;

        while(temp != null)
        {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {   
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }

        iCount++;
    }

    public void InsertLast(int iNo)
    {

        node newn = new node(iNo);
        

        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;

            while(temp !=  null)
            {
                temp = temp.next;
            }

            
            
        }

        iCount++;
    }

    public void InsertAtPos(int iNo,int iPos)
    {}

    public void DeleteFirst()
    {}

    public void DeleteLast()
    {}

    public void DeleteAtPos(int iPos)
    {}

}

class program452
{
    public static void main(String A[]) 
    {
        SinglyLL sobj = new SinglyLL();
    }
    
}
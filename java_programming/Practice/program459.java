import java.util.Scanner;

class node 
{
    public int data;
    public node next;
    public node prev;

    node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLinearLinkedList
{
    private int iCount;
    private node first;

    public DoublyLinearLinkedList()
    {
        this.iCount = 0;
        this.first = null;
    }

    public void Display()
    {
        if(first == null)
        {
            System.out.println("Linked List is Empty");
            return;
        }

        node temp = first;

        while(temp != null)
        {
            System.out.print("| " + temp.data + " | <=> ");
            temp = temp.next;
        }

        System.out.println("NULL");
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = null;

        newn = new node(iNo);

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            newn.next = this.first;
            this.first.prev = newn;
            this.first = newn;
        }

        this.iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = null;
        node temp = null;

        newn = new node(iNo);

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            temp = this.first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
            newn.prev = temp;
        }

        this.iCount++;
    }

    public void InsertAtPos(int iNo, int iPos)
    {
        int i = 0;
        node temp = null;
        node newn = null;

        if((iPos < 1)||(iPos > iCount + 1))
        {
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(iNo);
        }
        else 
        {
            temp = this.first;
            
            newn = new node(iNo);

            for(i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;

            this.iCount++;
        }
    }

    public void DeleteFirst()
    {
        if(this.first == null)
        {
            return;
        }
        else if(this.first.next == null)
        {
            this.first = null;
        }
        else
        {
            this.first = this.first.next;
            this.first.prev = null;
        }

        this.iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;
        
        if(this.first == null)
        {
            return;
        }
        else if(this.first.next == null)
        {
            this.first = null;
        }
        else
        {
            temp = this.first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next.prev = null;
            temp.next = null;
        }

        this.iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        int i = 0;
        node temp = null;

        if((iPos < 1)||(iPos > iCount))
        {
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else 
        {
            temp = this.first;

            for(i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp;
        
            this.iCount--;
        }

    }
}

class program459
{
    public static void main(String[] args)
    {
        Scanner sobj1 = new Scanner(System.in);
        DoublyLinearLinkedList dobj = new DoublyLinearLinkedList();

        int iChoice = 0;
        int iValue = 0;
        int iPosition = 0;
        int iRet = 0;

        while(iChoice != 9)
        {
            System.out.println("--------------------------------------");
            System.out.println("Enter your choice...");
            System.out.println("--------------------------------------");
            System.out.println("1 : Insert the Node at First Position");
            System.out.println("2 : Insert the Node at Last Position");
            System.out.println("3 : Insert the Node at Given Position");
            System.out.println("4 : Delete the Node at First Position");
            System.out.println("5 : Delete the Node at Last Position");
            System.out.println("6 : Delete the Node at Given Position");
            System.out.println("7 : Display the Elements");
            System.out.println("8 : Count the Number of Elements");
            System.out.println("9 : Terminate the Application");
            System.out.println("--------------------------------------");

            iChoice = sobj1.nextInt();

            switch(iChoice)
            {
                case 1:
                    System.out.print("Enter the value : ");
                    iValue = sobj1.nextInt();
                    dobj.InsertFirst(iValue);
                    break;

                case 2:
                    System.out.print("Enter the value : ");
                    iValue = sobj1.nextInt();
                    dobj.InsertLast(iValue);
                    break;

                case 3:
                    System.out.print("Enter the value : ");
                    iValue = sobj1.nextInt();

                    System.out.print("Enter the Position : ");
                    iPosition = sobj1.nextInt();

                    dobj.InsertAtPos(iValue, iPosition);
                    break;

                case 4:
                    dobj.DeleteFirst();
                    break;

                case 5:
                    dobj.DeleteLast();
                    break;

                case 6:
                    System.out.print("Enter the Position : ");
                    iPosition = sobj1.nextInt();

                    dobj.DeleteAtPos(iPosition);
                    break;

                case 7:
                    System.out.println("Elements of the Doubly Linked List are :");
                    dobj.Display();
                    break;

                case 8:
                    iRet = dobj.Count();
                    System.out.println("Number of Elements are : " + iRet);
                    break;

                case 9:
                    System.out.println("Thank you for using my Application.");
                    System.out.println("Author : Rushikesh Puri");
                    break;

                default:
                    System.out.println("Invalid Choice");
                    break;
            }
        }

        sobj1.close();
    }
}
import java.util.Scanner;

class node
{
    public node next;
    public int data;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyCircularLinkedList
{
    private int iCount;
    private node first;
    private node last;

    public SinglyCircularLinkedList()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    public void Display()
    {
        if(first == null)
        {
            System.out.println("Linked List is Empty");
            return;
        }

        node temp = first;

        do
        {
            System.out.print("| " + temp.data + " | -> ");
            temp = temp.next;
        }while(temp != first);

        System.out.println("(First)");
    }
    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = null;
        
        newn = new node(iNo);

        if(this.first == null)
        {
            this.first = newn;
            this.last = newn;
        }
        else
        {
            newn.next = this.first;
            this.first = newn;
        }

        this.iCount++;
        this.last.next = this.first;
    }

    public void InsertLast(int iNo)
    {
        node newn = null;
        
        newn = new node(iNo);

        if(this.first == null)
        {
            this.first = newn;
            this.last = newn;
        }
        else
        {
            this.last.next = newn;
            this.last = newn;
        }

        this.iCount++;
        this.last.next = this.first;
    }

    public void InsertAtPos(int iNo, int iPos)
    {
        int i = 0;
        node newn = null;
        node temp = null;


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
            temp.next = newn;

            this.iCount++;
            this.last.next = this.first;
        }
    }

    public void DeleteFirst()
    {
        if(this.first == null && this.last == null)
        {
            return;
        }
        else if(this.first == this.last)
        {
            this.first = null;
            this.last  = null;
        }
        else
        {
            this.first = this.first.next;
        }

        this.iCount--;
        this.last.next = this.first;


    }

    public void DeleteLast()
    {
        node temp = null;
        
        
        if(this.first == null && this.last == null)
        {
            return;
        }
        else if(this.first == this.last)
        {
            this.first = null;
            this.last  = null;
        }
        else
        {
            temp = this.first;

            while(temp.next != last)
            {
                temp = temp.next;
            }

            this.last = temp;

        }

        this.iCount--;
        this.last.next = this.first;

        
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

            this.iCount--;
            this.last.next = this.first;
        }
    }
}


class program458
{
    public static void main(String[] args)
    {
        Scanner sobj1 = new Scanner(System.in);
        SinglyCircularLinkedList sobj = new SinglyCircularLinkedList();

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
                    sobj.InsertFirst(iValue);
                    break;

                case 2:
                    System.out.print("Enter the value : ");
                    iValue = sobj1.nextInt();
                    sobj.InsertLast(iValue);
                    break;

                case 3:
                    System.out.print("Enter the value : ");
                    iValue = sobj1.nextInt();

                    System.out.print("Enter the Position : ");
                    iPosition = sobj1.nextInt();

                    sobj.InsertAtPos(iValue, iPosition);
                    break;

                case 4:
                    sobj.DeleteFirst();
                    break;

                case 5:
                    sobj.DeleteLast();
                    break;

                case 6:
                    System.out.print("Enter the Position : ");
                    iPosition = sobj1.nextInt();

                    sobj.DeleteAtPos(iPosition);
                    break;

                case 7:
                    System.out.println("Elements of the Linked List are :");
                    sobj.Display();
                    break;

                case 8:
                    iRet = sobj.Count();
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
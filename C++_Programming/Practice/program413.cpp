#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;          // $
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        DoublyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyLL :: DoublyLL()
{
    cout<<"Inside Constructor\n";
    this->first = NULL;
    this->iCount = 0;
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;
    temp = this->first;

    cout<<"<== NULL";
    while(temp != NULL)
    {
        cout<<"| "<< temp->data <<" | <=> ";
        temp = temp -> next;
    }
    cout<<"NULL ==>\n";
}

int DoublyLL :: Count()
{
    return this->iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;         // $ 

    if(this->first == NULL)
    {
        this -> first =  newn;
    }
    else
    {   
        newn -> next = this -> first;
        this -> first -> prev = newn;       // $
        this->first = newn;
    }

    this->iCount++;
}

void DoublyLL::InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    this->iCount++;
}

void DoublyLL :: InsertAtPos(int iNo,int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;
    
    if((iPos < 1)||(iPos > iCount + 1))
    {
        cout<<"INVALID POSITION";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {   
        temp = this -> first;
        newn = new NODE;

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
        

        this->iCount++;
    }
}

void DoublyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(this -> first -> next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this -> first;
        
        this->first = this->first -> next;
        
        delete temp;
        
        this->first->prev = NULL;
    }

    iCount--;
}

void DoublyLL :: DeleteLast()
{
    PNODE temp = NULL;
    PNODE target = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(this -> first -> next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        delete temp -> next;
        temp -> next = NULL;
    }
    this->iCount--;
}

void DoublyLL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    PNODE target = NULL;

    int i = 0;
    
    if((iPos < 1)||(iPos > iCount))
    {
        cout<<"INVALID POSITION";
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;
        temp -> next = target -> next;
        target -> next -> prev = temp;          // $
        delete target;                          // $

        this->iCount--;
    }
}

int main()
{
    DoublyLL dobj;

    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;
    int iRet = 0; 

    while(iChoice != 9)
    {
        cout<<"--------------------------------------\n";
        cout<<"Enter your choice...\n";
        cout<<"--------------------------------------\n";
        cout<<"1 : Insert the Node at first Position \n";
        cout<<"2 : Insert the Node at last Position  \n";
        cout<<"3 : Insert the Node at given Position \n";
        cout<<"4 : Delete the Node at first Position \n";
        cout<<"5 : Delete the Node at last Position  \n";
        cout<<"6 : Delete the Node at given Position \n";
        cout<<"7 : Display the elements \n";
        cout<<"8 : Count the number of elements \n";
        cout<<"9 : Terminate the Application...\n";
        cout<<"--------------------------------------\n";
        cin>>iChoice;

        switch(iChoice)
        {
        case 1:
            cout<<"Enter the value \n";
            cin>>iValue;
            dobj.InsertFirst(iValue);
            break;
        
        case 2:
            cout<<"Enter the value \n";
            cin>>iValue;
            dobj.InsertLast(iValue);
            break;

        case 3:
            cout<<"Enter the value \n";
            cin>>iValue;
            cout<<"Enter the Position \n";
            cin>>iPosition;
            dobj.InsertAtPos(iValue,iPosition);
            break;

        case 4:
            dobj.DeleteFirst();
            break;
        
        case 5:
            dobj.DeleteLast();
            break;
        
        case 6:
            cout<<"Enter the Position \n";
            cin>>iPosition;
            dobj.DeleteAtPos(iPosition);
            break;
        
        case 7:
            cout<<"Elements of the Linked List are : \n";    
            dobj.Display();
            break;
        case 8:
            iRet = dobj.Count();
            cout<<"Number of the Elements are : "<<iRet<<"\n";
            break;
        
        case 9:
            cout<<"Thank you for using Marvellous Infosystems Application By the LOYAL STUDENT\n"; 
            break;
        
        default:
            cout<<"Invalid Choice\n";
           
        }
    }


    return 0;
}
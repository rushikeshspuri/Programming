#include<iostream>
using namespace std;

#pragma pack (1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCl
{   
    private:
        PNODE first;
        PNODE last;
        int iCount; 
    
    public:
        SinglyCl();
        
        void Display();
        int Count();
        
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
    
};

SinglyCl::SinglyCl()
{   
    cout<<"Inside Constructor\n";
    this -> first = NULL;
    this -> last = NULL;
    this -> iCount = 0;
}

void SinglyCl :: Display()
{
    PNODE temp = NULL;
    

    if(first == NULL && last == NULL)
    {
        return;
    }

    temp = first;

    do
    {
        cout<<"| " << temp -> data <<" | ->" ;
        temp = temp -> next;
    } while (last -> next != temp);
    
    cout<<"\n";
}

int SinglyCl :: Count()
{return iCount;}

void SinglyCl :: InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    
    newn -> data = iNo;
    newn -> next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn -> next = first;
        first = newn;
        
    }

    last -> next = first;
    iCount++;
}

void SinglyCl :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    
    newn -> data = iNo;
    newn -> next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last -> next = newn;
        last = newn;
    }
    
    last -> next = first;
    iCount++;
}

void SinglyCl::InsertAtPos(int iNo, int iPos)
{
    int iCount = Count();

    if(iPos < 1 || iPos > iCount + 1)
    {
        cout << "Invalid Position\n";
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
        PNODE newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;

        PNODE temp = first;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

void SinglyCl :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = first;
        first = first -> next;
        delete temp ;
        last -> next = first;
    }
    iCount--;
}

void SinglyCl :: DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = first;

        while(temp->next != last)
        {
            temp=temp->next;
        }
        delete last ;
        last = temp;

        last -> next = first;
    }

    iCount--;
}

void SinglyCl::DeleteAtPos(int iPos)
{
    int iCount = Count();

    // Position validation
    if(iPos < 1 || iPos > iCount)
    {
        cout << "Invalid Position\n";
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
        PNODE temp = first;

        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        PNODE target = temp->next;

        temp->next = target->next;

        delete target;

        iCount--;
    }
}

int main()
{
    SinglyCl dobj;

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
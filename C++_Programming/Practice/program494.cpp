// SinglyLL_Generic.cpp
#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
    T data;
    struct node<T>* next;
    
};

template <class T>
class SinglyLL
{
    private:
        struct node<T> *first;
        int iCount;
    
    public:
        SinglyLL();
        
        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyLL<T> :: SinglyLL()
{
    this -> first = NULL;
    this -> iCount = 0;
}

template <class T>
void SinglyLL<T> :: Display()
{
    if(first == NULL)
    {
        return;
    }
    
    struct node<T>* temp = NULL;
    
    temp = this -> first;

    while(temp != NULL)
    {
        cout<<"| "<<temp -> data <<" | ->" ;
        temp = temp -> next;
    }

    cout<<"NULL"<<endl;
}

template <class T>
int  SinglyLL<T> :: Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T No)
{
    struct node<T>* newn = NULL;

    newn = new struct node<T>;

    newn -> data = No;
    newn -> next = NULL;

    if(this -> first == NULL)
    {
        this -> first = newn;
    }
    else
    {
        newn -> next = this -> first;
        this -> first = newn;
    }

    this -> iCount++;
}

template <class T>
void SinglyLL<T> :: InsertLast(T No)
{
    struct node<T>* newn = NULL;
    struct node<T>* temp = NULL;

    newn = new struct node<T>;

    newn -> data = No;
    newn -> next = NULL;

    if(this -> first == NULL)
    {
        this -> first = newn;
    }
    else
    {
        temp = this -> first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }

    this -> iCount++;
}

template <class T>
void SinglyLL<T> :: InsertAtPos(T No, int iPos)
{
    int i = 0;
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL; 

    if((iPos < 1) || (iPos > iCount + 1))
    {
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new struct node<T>;
        newn -> data = No;
        newn -> next = NULL;
        
        temp = this -> first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;

        this -> iCount++;
    }
    
}

template <class T>
void SinglyLL<T> :: DeleteFirst()
{
    struct node<T>* temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(this -> first -> next == NULL)
    {
        delete(this -> first);
        this -> first = NULL;
    }
    else
    {
       temp = this -> first;

       this -> first = this -> first -> next;
       
       delete temp;
    }

    this -> iCount--;
}

template <class T>
void SinglyLL<T> :: DeleteLast()
{
    struct node<T> * temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(this -> first -> next == NULL)
    {
        delete(this -> first);
        this -> first = NULL;
    }
    else
    {
        temp = this -> first;

        while(temp -> next -> next !=  NULL)
        {
            temp = temp -> next;
        }

        delete temp -> next ;
        temp -> next = NULL;
    }

    this -> iCount--;
}

template <class T>
void SinglyLL<T> :: DeleteAtPos(int iPos)
{
    int i = 0;
    struct node<T>* temp = NULL; 
    struct node<T>* target = NULL;

    if((iPos < 1) || (iPos > iCount))
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
        temp = this -> first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;
        temp -> next = temp -> next -> next;
        delete target;

        this->iCount--;
        
    }
    
}

int main()
{
    SinglyLL <int> sobj;

    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;
    int iRet = 0;

    while(iChoice != 9)
    {
        cout<<"--------------------------------------"<<endl;
        cout<<"Enter your choice..."<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"1 : Insert the Node at First Position"<<endl;
        cout<<"2 : Insert the Node at Last Position"<<endl;
        cout<<"3 : Insert the Node at Given Position"<<endl;
        cout<<"4 : Delete the Node at First Position"<<endl;
        cout<<"5 : Delete the Node at Last Position"<<endl;
        cout<<"6 : Delete the Node at Given Position"<<endl;
        cout<<"7 : Display the Elements"<<endl;
        cout<<"8 : Count the Number of Elements"<<endl;
        cout<<"9 : Terminate the Application"<<endl;
        cout<<"--------------------------------------"<<endl;

        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value : ";
                cin>>iValue;
                sobj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the value : ";
                cin>>iValue;
                sobj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the value : ";
                cin>>iValue;
                cout<<"Enter the position : ";
                cin>>iPosition;
                sobj.InsertAtPos(iValue, iPosition);
                break;

            case 4:
                sobj.DeleteFirst();
                break;

            case 5:
                sobj.DeleteLast();
                break;

            case 6:
                cout<<"Enter the position : ";
                cin>>iPosition;
                sobj.DeleteAtPos(iPosition);
                break;

            case 7:
                cout<<"Elements of the Linked List are : "<<endl;
                sobj.Display();
                break;

            case 8:
                iRet = sobj.Count();
                cout<<"Number of elements are : "<<iRet<<endl;
                break;

            case 9:
                cout<<"Thank you for using my Application."<<endl;
                cout<<"Author : Rushikesh Puri"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
                break;
        }
    }

    return 0;
}
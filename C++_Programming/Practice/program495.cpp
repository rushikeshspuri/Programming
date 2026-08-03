// SinglyCL_Generic.cpp
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
class SinglyCL
{
    private:
        struct node<T> *first;
        struct node <T> *last;
        int iCount;
    
    public:
        SinglyCL();
        
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
SinglyCL<T> :: SinglyCL()
{
    this -> first = NULL;
    this -> last  = NULL;
    this -> iCount = 0;
}

template <class T>
void SinglyCL<T> :: Display()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    
    struct node<T>* temp = NULL;

    temp = first;

    do
    {
        cout<<"| "<<temp -> data <<" | ->" ;
        temp = temp -> next;
    } while (temp != last -> next);
    
  

    cout<<endl;
}

template <class T>
int  SinglyCL<T> :: Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T> :: InsertFirst(T No)
{
    struct node<T>* newn = NULL;

    newn = new struct node<T>;
    newn -> data = No;
    newn -> next = NULL;

    if(first == NULL && last == NULL)
    {
        this -> first = newn;
        this -> last = newn;
    }
    else
    {
        newn -> next = this -> first;
        this -> first = newn;
    }

    this -> iCount++;
    this -> last -> next = this -> first ;
    
}

template <class T>
void SinglyCL<T> :: InsertLast(T No)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;
    newn -> data = No;
    newn -> next = NULL;

    if(first == NULL && last == NULL)
    {
        this -> first = newn;
        this -> last = newn;
    }
    else
    {
        this -> last -> next = newn;
        this -> last = newn;
    }

    this -> iCount++;
    this -> last -> next = this -> first;
}

template <class T>
void SinglyCL<T> :: InsertAtPos(T No, int iPos)
{
    int i = 0;
    struct node<T>* newn = NULL;
    struct node<T>* temp = NULL;

    if((iPos < 1)||(iPos > iCount + 1))
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
        temp = this -> first;
        newn = new struct node<T>;

        newn -> data = No;
        newn -> next = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;

        this -> iCount++;
        this -> last -> next = this -> first;

    }
}

template <class T>
void SinglyCL<T> :: DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete this -> first;
        this -> first = NULL;
        this -> last =  NULL;
    }
    else
    {
        this -> first = this -> first -> next;
        delete last -> next;
    }

    this -> iCount--;
    if(this -> first != NULL)
    {
        this -> last -> next = this -> first;
    }
}

template <class T>
void SinglyCL<T> :: DeleteLast()
{
    struct node<T>* temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete this -> first;
        this -> first = NULL;
        this -> last =  NULL;
    }
    else
    {
        temp = this -> first;

        while(temp -> next -> next != this -> first)
        {
            temp = temp -> next;
        }

        delete temp -> next;
        this -> last = temp;
    }

    this -> iCount--;
    if(this -> first != NULL)
    {
        this -> last -> next = this -> first;
    }
}

template <class T>
void SinglyCL<T> :: DeleteAtPos(int iPos)
{
    int i = 0;
    struct node<T>* temp = NULL;
    struct node<T>* target = NULL;

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
        temp = this -> first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;
        temp -> next = temp -> next -> next;
        delete target;

        this -> iCount--;
        this -> last -> next = this -> first;

    }
}

int main()
{
    SinglyCL <int>sobj;

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
                cout<<"Enter the Position : ";
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
                cout<<"Enter the Position : ";
                cin>>iPosition;
                sobj.DeleteAtPos(iPosition);
                break;

            case 7:
                cout<<"Elements of the Singly Circular Linked List are:"<<endl;
                sobj.Display();
                break;

            case 8:
                iRet = sobj.Count();
                cout<<"Number of Elements are : "<<iRet<<endl;
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
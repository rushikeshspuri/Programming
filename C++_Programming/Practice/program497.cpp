#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
    T data;
    struct node* next;
    struct node* prev;
};

template <class T>
class DoublyCL
{
    private:
        struct node<T>* first;
        struct node<T>* last;
        int iCount;

    public:
        DoublyCL();    

        void Display();
        int Count();
    
        void InsertFirst(T iNo);
        void InsertLast(T iNo);
        void InsertAtPos(T iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyCL<T> :: DoublyCL()
{
    this -> first  = NULL;
    this -> last   = NULL;
    this -> iCount = 0;
}   

template <class T>
void DoublyCL<T> ::  Display()
{
    if(first == NULL)
    {
        return;
    }
    
    struct node<T>* temp = NULL;

    temp = this -> first;

    do
    {
        cout<<"| " << temp -> data << " | -> ";
        temp = temp -> next;
    } while (temp != last -> next);
    
    cout<<"\n";
}

template <class T>
int DoublyCL<T> :: Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T> :: InsertFirst(T iNo)
{
    struct node<T>* newn = NULL;

    newn = new struct node<T>;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(this -> first == NULL)
    {
        this -> first = newn;
        this -> last  = newn;
    }
    else
    {
        newn -> next = this -> first;
        this -> first -> prev = newn;
        this -> first = newn;
    }

    this -> iCount++;
    this -> last -> next = this -> first;
    this -> first -> prev = this -> last;
}

template <class T>
void DoublyCL<T> :: InsertLast(T iNo)
{
    struct node<T>* newn = NULL;

    newn = new struct node<T>;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(this -> first == NULL)
    {
        this -> first = newn;
        this -> last  = newn;
    }
    else
    {
        this -> last -> next = newn;
        newn -> prev = this -> last;
        this -> last = newn;
    }

    this -> iCount++;
    this -> last -> next = this -> first;
    this -> first -> prev = this -> last;
}

template <class T>
void DoublyCL<T> :: InsertAtPos(T iNo, int iPos)
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
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new struct node<T>;
        temp = this -> first;

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        newn -> prev = temp;
        temp -> next = newn;

        this -> iCount++;
        this -> last -> next = this -> first;
        this -> first -> prev = this -> last;

    }

}

template <class T>
void DoublyCL<T> :: DeleteFirst()
{
    if(this -> first == NULL && this -> last == NULL)
    {
        return;
    }
    else if(this -> first == this -> last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        this -> first = this -> first -> next;
        delete this -> first -> prev;
    }

    this -> iCount--;
    if(this -> first != NULL)
    {
        this -> last -> next = this -> first;
        this -> first -> prev = this -> last;
    }
}

template <class T>
void DoublyCL<T> :: DeleteLast()
{
    struct node<T>* temp = NULL;

    if(this -> first == NULL && this -> last == NULL)
    {
        return;
    }
    else if(this -> first == this -> last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        temp = this -> last;
        this -> last = this -> last -> prev;
        delete temp;
    }

    this -> iCount--;
    if(this -> first != NULL)
    {
        this -> last -> next = this -> first;
        this -> first -> prev = this -> last;
    }

}

template <class T>
void DoublyCL<T> :: DeleteAtPos(int iPos)
{
    int i = 0;
    struct node<T>* temp = NULL;

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

        temp -> next = temp -> next -> next;
        delete temp -> next -> prev;
      
        this -> iCount--;
        this -> last -> next = this -> first;
        this -> first -> prev = this -> last;

    }
}

int main()
{
    DoublyCL<int> dobj;

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
                dobj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the value : ";
                cin>>iValue;
                dobj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the value : ";
                cin>>iValue;
                cout<<"Enter the Position : ";
                cin>>iPosition;
                dobj.InsertAtPos(iValue, iPosition);
                break;

            case 4:
                dobj.DeleteFirst();
                break;

            case 5:
                dobj.DeleteLast();
                break;

            case 6:
                cout<<"Enter the Position : ";
                cin>>iPosition;
                dobj.DeleteAtPos(iPosition);
                break;

            case 7:
                cout<<"Elements of the Doubly Circular Linked List are:"<<endl;
                dobj.Display();
                break;

            case 8:
                iRet = dobj.Count();
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

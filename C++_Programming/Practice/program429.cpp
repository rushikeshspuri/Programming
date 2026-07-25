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
{}

int SinglyCl :: Count()
{return iCount;}

void SinglyCl :: InsertFirst(int iNo)
{}

void SinglyCl :: InsertLast(int iNo)
{}

void SinglyCl :: InsertAtPos(int iNo,int iPos)
{}

void SinglyCl :: DeleteFirst()
{}

void SinglyCl :: DeleteLast()
{}

void SinglyCl :: DeleteAtPos(int iPos)
{}

int main()
{
    SinglyCl sobj;

    return 0;
}
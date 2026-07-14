#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next; 
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{}

int Count(PNODE first)
{return 0;}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;                      // pointer created of node

    newn = (PNODE)malloc(sizeof(NODE));     // node created

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)                      // LL is empty
    {
        *first = newn;
    }
    else                                    // LL contain atleast one node
    {
        newn -> next = *first;              
        *first = newn;                      // head value is now newn
    }
}

void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;                      // pointer created of node

    newn = (PNODE)malloc(sizeof(NODE));     // node created

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)                      // LL is empty
    {
        *first = newn;
    }
    else                                    // LL contain atleast one node
    {
        
    }
}

void InsertAtPos(PPNODE first,int iNo,int iPos)
{}

void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE first)
{} 

void DeleteAtPos(PPNODE first,int iPos)
{}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    return 0;
}
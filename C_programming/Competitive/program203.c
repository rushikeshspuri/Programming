#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int SearchLastOcc(PNODE first,int iNo)
{
    int iPos = 1;
    int LastPos = -1;

    while(first != NULL)
    {
        if(first -> data == iNo)
        {
            LastPos = iPos;
        }
        iPos++;
        first = first -> next;
    }
    return LastPos;
}

void Display(PNODE first)
{
    while(first != NULL)
    {   
        printf("| %d | -> ",first ->data);
        first = first -> next;
    }
    printf("NULL ->\n");
}


void InsertLast(PPNODE first,int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = iNo;
    newn -> next = NULL;

    temp = *first;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
}

int main()
{
    PNODE head = NULL;
    
    int iRet = 0;

    InsertLast(&head,28);
    InsertLast(&head,11);
    InsertLast(&head,2);
    InsertLast(&head,22);
    InsertLast(&head,22);

    Display(head);
    
    iRet = SearchLastOcc(head,22);

    printf("%d\n", iRet);

    return 0;
}

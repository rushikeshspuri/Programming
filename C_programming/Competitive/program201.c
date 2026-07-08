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


void DisplayEven(PNODE first)
{
    while(first != NULL)
    {
        if(first -> data % 2 != 0)
        {
            printf("| %d | -> ",first ->data);
        }

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

    InsertLast(&head,28);
    InsertLast(&head,11);
    InsertLast(&head,2);
    InsertLast(&head,22);
    InsertLast(&head,22);

    DisplayEven(head);
    

    return 0;
}

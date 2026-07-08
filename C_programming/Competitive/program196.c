#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount;
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

bool boolSearch(PNODE head, int iNo)
{ 
    while(head != NULL)
    {
        
        if(head -> data == iNo)
        {
            return true;
        }
        head = head -> next;

    }

    return false;

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
    bool bRet = false;

    InsertLast(&head,51);
    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);

    Display(head);
    
    iRet = Count(head);
    
    printf("Number of elements is  %d\n ",iRet);

    bRet = boolSearch(head,51);
    
    if(bRet == true)
    {
        printf("Number is Present\n");
    }
    else
    {
        printf("Number is not Present\n");
    }

    return 0;
}

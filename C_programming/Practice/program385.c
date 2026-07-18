#include<stdio.h>                   // Doubly linear LinkedListn int this file
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;              // $
    
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    printf("%d\n",sizeof(NODE));    // 20 bytes
    
    PNODE head = NULL;


    return 0;
}
#include<stdio.h>
// travel
#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

int main()
{
    PNODE head = NULL;
    PNODE temp = NULL;

    NODE obj1,obj2,obj3;

    head = &obj1;

    obj1.data = 11;
    obj1.next = &obj2;
    
    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    temp = head;

    // itteration
    while(temp != NULL)    
    {
        printf("%d\n",temp->data);  
        temp = temp -> next;                     // its like temp++ , we are moving the pointer by 1       
    }

    return 0;
}
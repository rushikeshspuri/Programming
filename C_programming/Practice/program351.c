#include<stdio.h>
// using structure in this program

struct node 
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;

    printf("%d\n",sizeof(obj));     // 16 bytes of memory
    // 4 (integer) + 4(padding) + 8(pointer)

    return 0;
}
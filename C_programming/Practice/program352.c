#include<stdio.h>
// using structure with # pragmapack program

#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;

    printf("%d\n",sizeof(obj));     // 12 bytes of memory
    // 4 (integer) + 8(pointer)

    return 0;
}
#include<iostream>
using namespace std;

#pragma pack (1)

struct node
{
    int data;
    struct node * next;
    struct node * prev; 
};

typedef struct node NODE;
typedef struct node * PNODE;

#pragma pack(1)
class DoublyCL
{
    private:
        PNODE firsts;
        PNODE last;
        int iCount;
    
    public:
        DoublyCL();
        void Display();
        int Count();
};

int main()
{
    DoublyCL dobj;

    return 0;
}
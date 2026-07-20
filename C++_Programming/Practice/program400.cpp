#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int iCount;

        SinglyLL()
        {
            cout<<"Inside Constructor\n";
            this->first = NULL;
            this->iCount = 0;
        }

};

int main()
{
    SinglyLL sobj;

    // if there are 5 nodes

    // drawbacks
    sobj.first = NULL;
    sobj.iCount = 15;
    
    return 0;
}
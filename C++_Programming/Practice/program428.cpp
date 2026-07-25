#include<iostream>
using namespace std;

#pragma pack (1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCl
{   
    private:
        PNODE first;
        PNODE last;
        int iCount; 
    
    public:
        SinglyCl();
};

SinglyCl::SinglyCl()
{   
    cout<<"Inside Constructor\n";
    this -> first = NULL;
    this -> last = NULL;
    this -> iCount = 0;
}

int main()
{
    SinglyCl sobj;

    return 0;
}
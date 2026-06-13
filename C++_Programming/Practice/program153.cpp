#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
};

int main()
{
    ArrayX aobj;
    
    cout<<sizeof(aobj)<<endl;   // Due to padding 16bytes
    
    return 0;
}
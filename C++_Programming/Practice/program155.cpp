#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int X)
        {

        }
};

int main()
{
    ArrayX aobj;                // Error due to default constructor not available
    
    cout<<sizeof(aobj)<<endl;   // 12 bytes  
    
    return 0;
}
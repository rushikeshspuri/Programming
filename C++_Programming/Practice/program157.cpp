#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX()                // Default Constructor
        {            
        }        
       
        ArrayX(int X)           // Parametrised Constructor
        {
        }
};

int main()
{
    ArrayX aobj1;                // Default 
    ArrayX aobj2(5);             // Parametrised 
    
    cout<<sizeof(aobj1)<<endl;   // 12 bytes  
    
    return 0;
}
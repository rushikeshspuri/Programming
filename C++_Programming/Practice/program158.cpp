#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;
       
        // Parametrised Constructor
        ArrayX(int X)           
        {
            cout<<"Inside Constructor\n";

            iSize = X;              // Characteristics intialisation
            Arr = new int [iSize];  // Resource Allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor\n";

            delete []Arr;           // Resource Deallocation
        }

};

int main()
{
    ArrayX aobj1(5);               
        
 return 0;
}
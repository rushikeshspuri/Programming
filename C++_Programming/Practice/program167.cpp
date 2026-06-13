#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;
       
    public:    
        //Parametrised Constructor with Default argument
        ArrayX(int X = 5)           
        {
            iSize = X;              
            Arr = new int [iSize];  
        }

        ~ArrayX()
        {
            delete []Arr;           
        }

};

int main()
{        
    ArrayX *aobj1 = new ArrayX();       // Parametrised Constructor
    ArrayX *aobj2 = new ArrayX(15);      // Parametrised Constructor
    
    // Function call ;

    delete aobj1;
    delete aobj2;
    
    return 0;
}
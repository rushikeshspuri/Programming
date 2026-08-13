#include<iostream>
using namespace std;

class Number
{
    public:
        bool ChkDivi(int iNo)
        {
            if(iNo % 3 == 0 && iNo % 5 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter Number\n";
    cin>>iValue;

    Number nobj;
    bRet = nobj.ChkDivi(iValue);

    if(bRet == true)
    {
        cout<<iValue<<"is Divisible by 3 & 5 \n";
    }
    else
    {
        cout<<iValue<<"is NOT Divisible by 3 & 5 \n";
    }

    return 0;
}
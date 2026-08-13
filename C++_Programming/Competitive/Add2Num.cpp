#include<iostream>

using namespace std;

class Arithmetic
{
    public :
        int iNo1;
        int iNo2;

    Arithmetic  (
                    int iValue1, int iValue2
                )
    {
        iNo1 = iValue1;
        iNo2 = iValue2;
    }

    int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return  iAns;
    }
};

int main()
{
    int iValue1 = 0;
    cout<<"Enter First number :"<<"\n";
    cin>>iValue1;
    
    int iValue2 = 0;
    cout<<"Enter First number :"<<"\n";
    cin>>iValue2;
    
    Arithmetic aobj(iValue1,iValue2);
    int result = 0;

    result = aobj.Addition();
    cout<<"Addition is : "<<result<<"\n";

    return 0;
}   
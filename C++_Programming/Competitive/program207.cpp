#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3)
{
    T Max = 0;

    if(No1 > No2 && No1 > No3)
    {
        Max = No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        Max = No2;
    }
    else
    {
        Max = No3;
    }

    return Max;

};

int main()
{
    int iRet = 0;
    iRet = Maximum(50,20,30);
    printf("Maximum is :%d\n",iRet);

    float fRet = 0.0f;
    fRet = Maximum(10.0f,20.0f,32.2f);
    printf("Maximum is :%f\n",fRet);

    double dRet = 0.0;
    fRet = Maximum(10.2,200.0,32.2);
    printf("Maximum is :%lf\n",fRet);

    return 0;
}


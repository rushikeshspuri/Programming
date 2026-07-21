#include<iostream>
using namespace std;

template <class T>
T multiply(T No1, T No2)
{
    T Ans = 0;

    Ans = No1 * No2;

    return Ans;
};

int main()
{
    int iRet = 0;
    iRet = multiply(10,20);
    printf("Multiplication is :%d\n",iRet);

    float fRet = 0.0f;
    fRet = multiply(10.0f,20.0f);
    printf("Multiplication is :%f\n",fRet);

    return 0;
}


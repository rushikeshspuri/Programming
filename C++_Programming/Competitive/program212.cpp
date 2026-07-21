#include<iostream>
using namespace std;

template <class T>
int iFrequency(T *arr,int iSize,T iNo)
{
    int iCount = 0;
    
    if(iSize < 1)
    {
        printf("Invalid Input");
    }

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
    
}

int main()
{
    int iRet = 0;

    int Arr[] = {10,20,20,40,50,30,11,30,1,30};
    float Brr[] = {9.8f,2.6f,3.6f,2.6f,2.6f,1.2f};
    
    iRet = iFrequency(Arr,10,30);

    cout<<iRet<<endl;

    iRet = iFrequency(Brr,6,2.6f);

    cout<<iRet<<endl;

    return 0;
}
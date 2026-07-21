#include<iostream>
using namespace std;

template <class T>
int LastOccurence(T *arr,int iSize,T iNo)
{
    int i = 0;
    int Index = -1;
    
    if(iSize < 1)
    {
        printf("Invalid Input");
    }

    for(i = 0; i < iSize; i++)
    {
        if(arr[i] == iNo)
        {
            Index = i;
        }
    }

   return Index;
}

int main()
{
    int iRet = 0;

    int Arr[] = {10,20,30,10,40,10,30,40,10};
    
    iRet = LastOccurence(Arr,10,40);

    cout<<iRet;

    return 0;
}
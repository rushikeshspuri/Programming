#include<iostream>
using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
    T Add = 0;

    for(int i = 0; i < iSize; i++)
    {
        Add += arr[i];
    }

    return Add;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0f,20.0f,30.0f,40.0f,50.0f};
    
    int iSum = AddN(Arr,5);
    printf("%d\n",iSum);

    float fSum = AddN(Brr,5);
    printf("%f\n",fSum);
    
    return 0;
}
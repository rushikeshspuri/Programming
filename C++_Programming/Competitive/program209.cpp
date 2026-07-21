#include<iostream>
using namespace std;

template <class T>
T Maximum(T *arr, int iSize)
{
    T Max = arr[0];

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }

    return Max;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0f,20.0f,30.0f,40.0f,50.0f};
    
    int iMax = Maximum(Arr,5);
    printf("%d\n",iMax);

    float fMax = Maximum(Brr,5);
    printf("%f\n",fMax);
    
    return 0;
}
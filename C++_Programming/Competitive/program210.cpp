#include<iostream>
using namespace std;

template <class T>
T Minimum(T *arr, int iSize)
{
    T Min = arr[0];

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }

    return Min;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0f,20.0f,30.0f,40.0f,50.0f};
    
    int iMin = Minimum(Arr,5);
    printf("%d\n",iMin);

    float fMin = Minimum(Brr,5);
    printf("%f\n",fMin);
    
    return 0;
}
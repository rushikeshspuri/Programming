#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int i = 0;
    int j = iSize - 1;
    T temp;

    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    int Arr[] = {10,20,30,10,40,10,30,40,10,20};

    cout << "Before Reverse:\n";

    for(int i = 0; i < 10; i++)
    {
        cout << Arr[i] << "\t";
    }

    Reverse(Arr, 10);

    cout << "\n\nAfter Reverse:\n";

    for(int i = 0; i < 10; i++)
    {
        cout << Arr[i] << "\t";
    }

    return 0;
}
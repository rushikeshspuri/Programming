#include<iostream>
using namespace std;

template <class T>
void Display(T value,int iSize)
{
    if(iSize < 1)
    {
        printf("Invalid Input");
    }

    while(iSize != 0)
    {
        cout<<value<<"\t";
        iSize--;
    }
}

int main()
{

    Display('M',3);
    Display("\nRushi",20);
    Display(13,5);
    Display(555.0,2);
    
    return 0;
}
#include<iostream>
using namespace std;

template <class T>
class Searching
{
    private:
        int iSize;
        T *Arr;

    public:
        Searching(int iNo);
        ~Searching();

        void Accept();
        void Display();
        bool LinearSearch(T iNo);
        bool BIDirectionalSearch(T iNo);
};

template <class T>
Searching<T> :: Searching(int iNo)
{
    iSize = iNo;
    Arr = new T[iSize];
}

template <class T>
Searching<T> :: ~Searching()
{
    delete []Arr;
}

template <class T>
void Searching<T> :: Accept()
{
    cout<<"Enter the Elements\n";
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

template <class T>
void Searching<T> ::  Display()
{
    cout<<"Elements of the Array are : \n";
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        cout << Arr[i]<<"\n";
    }
}

template <class T>
bool Searching<T> :: LinearSearch(T iNo)
{
    bool bFlag = false;
    int  i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(iNo == Arr[i])
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

template <class T>
bool Searching<T> :: BIDirectionalSearch(T iNo)
{
    int iStart = 0;
    int iEnd = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize - 1;
    while(iStart <= iEnd)
    {
        if(Arr[iStart] == iNo || Arr[iEnd] == iNo)
        {
            bFlag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return bFlag;
}

int main()
{
    // Change the template type here (e.g. Searching<float>, Searching<char>)
    // to work with a different data type; the rest of the code needs no change.
    Searching<int> sobj(5);
    sobj.Accept();
    sobj.Display();
    if(sobj.LinearSearch(30) == true)
    {
        cout<<"Element is present \n";
    }
    else
    {
        cout<<"Element is not present \n";
    }
    if(sobj.BIDirectionalSearch(30) == true)
    {
        cout<<"Element is present \n";
    }
    else
    {
        cout<<"Element is not present \n";
    }

    return 0;
}

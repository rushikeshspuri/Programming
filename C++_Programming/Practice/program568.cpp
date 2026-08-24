#include<iostream>
using namespace std;

class Searching
{
    private:
        int iSize;
        int *Arr;
    
    public:
        Searching(int iNo);
        ~Searching();
        
        void Accept();
        void Display();

        bool LinearSearch(int iNo);
        bool BIDirectionalSearch(int iNo);
};

Searching :: Searching(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];
}

Searching :: ~Searching()
{
    delete []Arr;
}

void Searching :: Accept()
{
    cout<<"Enter the Elements\n";

    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

void Searching ::  Display()
{
    cout<<"Elements of the Array are : \n";

    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cout << Arr[i]<<"\n";
    }
}

bool Searching :: LinearSearch(int iNo)
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

bool Searching :: BIDirectionalSearch(int iNo)
{
    int iStart = 0;
    int iEnd = 0;
     bool bFlag = false;
    
    iStart = 0;
    iEnd = iSize - 1;

    while(iStart < iEnd)        // wrong condition , middle element issue
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
   
    Searching sobj(5);

    sobj.Accept();
    sobj.Display();

    if(sobj.LinearSearch(30 == true))
    {
        cout<<"Element is present \n";
    }
    else
    {
        cout<<"Element is not present \n";
    }

    if(sobj.BIDirectionalSearch(30 == true))
    {
        cout<<"Element is present \n";
    }
    else
    {
        cout<<"Element is not present \n";
    }
    

    return 0;
}
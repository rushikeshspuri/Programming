#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        SumDigits(iNo / 10);    
    }

    return iSum;
}

int main()
{  
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    
    iRet = SumDigits(iValue);
    printf("Summation of Digits %d\n",iRet);


    return 0;
}
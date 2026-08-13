#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumDigits(iNo);    
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
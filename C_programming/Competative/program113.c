#include<stdio.h>

void Display(int iRow, int iCol)
{
    int iCnt = 0;
    
    for(iCnt = 2; iCnt <= iNo*2; iCnt+=2)
    {        
        printf("%d\t",iCnt);   
    }        
    printf("\n");
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows: \n");
    scanf("%d",&iValue1);

    printf("Enter number of Columns: \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}
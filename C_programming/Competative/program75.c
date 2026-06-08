#include<stdio.h>
#include<stdlib.h>

void Range(int Arr [],int iLength, int iStarting, int iEnding)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(Arr[iCnt] >= iStarting && Arr[iCnt] <= iEnding)
       {
            printf("%d\n",Arr[iCnt]);
       }
    }
}
int main()
{
    int iSize = 0; int iCnt = 0;
    int iValue1 = 0, iValue2 = 0;
    int *p = NULL ;

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("memory not allocated");
        return -1;
    }

    printf("Enter %d Elements \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}
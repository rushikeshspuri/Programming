#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iValue)
{
    int iCnt = 0 , iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            iCount++;
        }   
    }
    
    return iCount;
    
}

int main ()
{
    int *p = NULL;
    int iSize = 0 , iCnt = 0 , iRet = 0 , iNo = 0;

    printf("Enter number of Elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Elements \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the Number you want to Search : \n");
    scanf("%d",&iNo);
    
    iRet = Frequency(p,iSize,iNo);

    printf("%d",iRet);
    
    free(p);

    return 0;

}
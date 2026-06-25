#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iValue)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            break;;
        }    
    }
    
    if(iCnt == iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
}

int main ()
{
    int *p = NULL;
    int iSize = 0 , iCnt = 0 ,  iNo = 0;
    BOOL bRet = FALSE;

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
    
    bRet = Check(p,iSize,iNo);

    if(bRet == TRUE)
    {
        printf("Number is Present \n");
    }
    else
    {
        printf("Number is Absent\n");
    }
   
    free(p);

    return 0;

}

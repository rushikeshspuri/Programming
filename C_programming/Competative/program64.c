#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLenght)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {  
        if(Arr[iCnt] % 2 == 0 && Arr[iCnt] % 5 == 0)
        {
            printf("The Even Elements Divisible by 5 :%d\n",Arr[iCnt]);
        }
    }

}

int main ()
{
    int *p = NULL , iSize = 0 , iCnt = 0;
    
    printf("Enter number of Elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;   
}
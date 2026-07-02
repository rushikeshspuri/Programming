#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 , j = 0;
    int start = 0 ; int  val = 0;

    for(i = 0; i < iRow; i++)
    {
        val = val = 2 - (i % 2);

        for(j = 0; j < iCol; j++ )
        {
            printf("%d\t", val);
            val = val + 2;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    printf("Enter number of Rows\n");
    scanf("%d",&iValue1);
    
    int iValue2 = 0;
    printf("Enter number of Column\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
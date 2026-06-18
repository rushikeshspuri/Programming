#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    int num = 0;

    for(i = 1; i <= iRow; i++)
    {
        num = i;
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",num);
            num++;
        }
        printf("\n");
    }
   
}

int main()
{
    int iValue1 = 0;
    printf("Enter number of Rows\n");
    scanf("%d", &iValue1);

    int iValue2 = 0;
    printf("Enter number of Column\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
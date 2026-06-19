#include<stdio.h>

void DisplayScehdule(char chDiv)
{
    if(chDiv == 'A' ||chDiv == 'a')
    {
        printf("Your exam at 7:00 am\n");
    }
    else if(chDiv == 'B'|| chDiv == 'b')
    {
        printf("Your exam at 8:30 am\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam  at 9:20 am\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your examm at 10:30 am\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
   
}

int main()
{
    char cValue = '\0';

    printf("Enter the Division\n");
    scanf("%c",&cValue);
 
    DisplayScehdule(cValue);

    return 0;
}
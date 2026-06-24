#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%s",Arr);    // issue scanf is taking input until firs space

    printf("Entered String is : %s\n",Arr);

    return 0;

}
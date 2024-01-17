#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str>='0' && *str<='9')
        {
            printf("%s",*str);
            iCnt++;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}
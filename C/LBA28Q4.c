#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt=-1;
    int i=0;

    while(*str!='\0')
    {
        if(*str==ch)
        {
            iCnt=i;
        }
        i++;
        str++;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet=0;

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    iRet=LastChar(arr,cValue);

    printf("Character location is %d",iRet);

    return 0;
}
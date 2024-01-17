//String
#include<stdio.h>

int strlenX(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    int iRet=strlenX(Arr);
    printf("Length of String is:%d",iRet);

    return 0;
}
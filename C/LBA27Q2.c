#include<stdio.h>

int Struprx(char *str)
{

    while(*str!='\0')
    {
        if(*str>='a'&& *str<='z')
        {
            *str=*str-32;
        }
        str++;
    }
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    Struprx(arr);

    printf("Modified String is: %s",arr);

    return 0;
}
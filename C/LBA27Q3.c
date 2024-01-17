#include<stdio.h>

int Strtogglex(char *str)
{

    while(*str!='\0')
    {
        if(*str>='A'&& *str<='Z')
        {
            *str=*str+32;
        }
        else if(*str>='a'&& *str<='z')
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

    Strtogglex(arr);

    printf("Modified String is: %s",arr);

    return 0;
}
#include<stdio.h>

char DisplayConvert(char CValue)
{
    if(CValue>65 && CValue<90)
    {
        printf("%c",tolower(CValue));
    }
    else if(CValue>97 && CValue<122)
    {
        printf("%c",toupper(CValue));
    }
}

int main()
{
    char cValue='\0';
    printf("Enter character:");
    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return 0;
}
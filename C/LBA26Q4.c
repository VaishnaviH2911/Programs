#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str!='\0')
    {
        int iCnt=0;

        if(*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'||*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char arr[20];
    int bRet=FALSE;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    bRet=ChkVowel(arr);

    if(bRet==TRUE)
    {
        printf("Contains Vowel");
    }
    else{
        printf("There is no Vowel");
    }

    return 0;
}
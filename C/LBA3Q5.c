#include<stdio.h>
#include<stdbool.h>

typedef bool BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkVowel(char cValue)
{
    if(cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u'||cValue=='A'||cValue=='E'||cValue=='I'||cValue=='O'||cValue=='U' )
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter character:");

    scanf("%c",&cValue);

    bRet=chkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not vowel");
    }
    return 0;
}
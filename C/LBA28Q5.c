#include<stdio.h>
#include<string.h>

void StrRevX(char *str)
{
    int length=strlen(str);
    int s= 0;
    int e=length-1;

    while (s < e)
    {
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;

        s++;
        e--;
    }
    
}
int main()
{
    char arr[20];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);

    return 0;
}
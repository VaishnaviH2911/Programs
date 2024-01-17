#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}
    
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Reversed string is: %s",arr);

    return 0;
}
#include<stdio.h>
int main()
{
    char name[30];
    printf("Please enter full name:");
    scanf("%[^\n]s",&name);
    printf("Your name is:%s",name);
    return 0;
}
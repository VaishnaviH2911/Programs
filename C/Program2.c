//Accept 2 values from user and perform the addition
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d\n%d",&a,&b);
    int c;
    c=a+b;
    printf("Addition is:%d",c);
    return 0;
}
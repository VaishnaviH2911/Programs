#include<stdio.h>
int main()
{
    int n,r,reverse=0;
    printf("Enter the no:");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        reverse=(reverse*10)+r;
        n=n/10;
    }
    printf("Reverse no. is:%d",reverse);
    return 0;

}
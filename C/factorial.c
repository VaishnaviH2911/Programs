#include<stdio.h>
int fact(int n);
int main()
{
    int n,f;
    printf("Enter the no. :");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial is:%d",f);
}
int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
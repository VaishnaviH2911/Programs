#include<stdio.h>
int main()
{
    int r,sum=0,n,temp;
    printf("Enter the no:");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("No. is Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}

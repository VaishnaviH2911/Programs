#include<stdio.h>

DisplayASCII()
{
    int iCnt=0;

    printf("-------------------------------------------\n");
    printf("-----------------ASCII TABLE----------------\n");
    printf("--------------------------------------------\n");

    for(iCnt=0;iCnt<=127;iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("---------------------------------------------\n");

}

int main()
{
    DisplayASCII();

    return 0;
}
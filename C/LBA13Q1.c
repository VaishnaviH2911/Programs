#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i=0;
    int eSum=0;
    int oSum=0;
    int diff=0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            eSum=eSum+Arr[i];
        }
        if(Arr[i]%2!=0)
        {
            oSum=oSum+Arr[i];
        }
    }
    diff=eSum-oSum;
    return diff;
}
int main()
{
    int iSize=0, iRet=0, iCnt=0;
    int *p=NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements:\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=Difference(p,iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;
}
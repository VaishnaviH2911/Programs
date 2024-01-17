#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt=0;
    int fCount=0;
    int no=11;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==no)
        {
            fCount=fCount+1;
        }
    }
    return fCount;
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

    iRet=Frequency(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}
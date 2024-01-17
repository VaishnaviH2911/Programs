#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt=0;
    int eCount=0;
    int oCount=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            eCount=eCount+1;
        }
        if(Arr[iCnt]%2!=0)
        {
            oCount=oCount+1;
        }
    }
    return(eCount-oCount);
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

    iRet=CountEven(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}
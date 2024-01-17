#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=Arr[0];
    int iMin=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    printf("Max element is:%d\n",iMax);
    printf("Min element is:%d\n",iMin);
}
int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;

    printf("Enter the no. of elements u want to enter:\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));

    printf("Dynamic memory allocated successfully\n");

    printf("Enter the %d elements:\n",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("Enter the element no. %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    MaxMin(ptr,iCount);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully");

    return 0;


}
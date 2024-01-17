#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
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

    iRet=Maximum(ptr,iCount);

    printf("Maximum element is:%d\n",iRet);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully");

    return 0;


}
#include<stdio.h>
#include<stdlib.h>

float  Average(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;
    float fAverage=0.0f;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    fAverage=((float)iSum/(float)iSize);

    return fAverage;

}

int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    float fRet=0.0f;

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

    fRet=Average(ptr,iCount);

    printf("Average is:%f\n",fRet);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully");

    return 0;


}
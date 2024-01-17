#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iSize)
{
    int iCnt=0;

    printf("\nEven Elements of the array are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt])%2==0)
        {
            printf("%d\t",Arr[iCnt]);
        
        }
    }
    printf("\n");
}

int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;

    printf("Enter the no.of elements that u want to enter:");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount*sizeof(int));

    printf("Dynamic memory gets allocated successfully for %d elements\n",iCount);

    printf("Enter the %d values:\n",iCount);
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\nEnter the element no %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    DisplayEven(ptr,iCount);

    free(ptr);
    printf("Dynamic memory gets deallocated successfully");

    return 0;

}
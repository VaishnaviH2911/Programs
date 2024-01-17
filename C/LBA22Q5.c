#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt=0;
    int jCnt=0;
    int s=0;

     for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for (int s= 1; s < iCnt; s++)
        {
            printf("  ");
        }
        for (jCnt = iCnt; jCnt <= iCol; jCnt++)
        {
            printf("%d", jCnt);

            if (jCnt < iCol)
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and columns:");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
// Accept number of rows and number of columns from user and display below pattern.

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    int A = 0;
    for (iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for (jCnt = 1 + A; jCnt <= iCol + A; jCnt++)
        {
            printf("%d\t", jCnt);
        }
        printf("\n");
        A += 1;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and number of columns: ");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
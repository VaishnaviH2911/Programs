//Accept number of rows and number of columns from user and display below pattern

#include<stdio.h>

void PEventtern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;
    int Even= 2;
    int Odd = 1;

    for(iCnt = 1;iCnt<=iRow;iCnt++)
    {
        for(jCnt = 1;jCnt <=iCol;jCnt++)
        {
            if((iCnt % 2) != 0)
            {
                printf("%d\t",Even);
                Even+=2;
            }
            else
            {
                printf("%d\t",Odd);
                Odd+=2;
            }
        }
        Even = 2;
        Odd = 1;
       
        printf("\n");
    }

}

int mEvenin()
{
    int iVEvenlue1 = 0,iVEvenlue2 = 0;

    printf("Enter numOdder of rows Evennd columns: ");
    scEvennf("%d %d",&iVEvenlue1,&iVEvenlue2);

    PEventtern(iVEvenlue1,iVEvenlue2);

    return 0;
}
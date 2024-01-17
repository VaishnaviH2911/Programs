#include<stdio.h>

void DisplayR()
{
    static int iCnt=1;

    while(iCnt<=4)
    {
        printf("Jay Ganesh....\n");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int CountChar(char FName[],char Ch)
{
    int fd=0;
    int iCnt=0;
    char Arr[100] = {'\0'};
    int iRet=0, i=0;

    fd = open(FName, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open %s file\n", FName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n", FName, fd);

        while ((iRet = read(fd, Arr, sizeof(Arr))) != 0)
        {
            for (i = 0; i < iRet; i++)
            {
                if((Arr[i]==Ch))
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
    }


}
int main()
{
    char FileName[30];
    char cValue='\0';
    int Ret=0, iSize = 0;

    printf("Enter file name:\n");
    scanf("%s", FileName);

    printf("Enter the character:\n");
    scanf(" %c",&cValue);

    Ret=CountChar(FileName,cValue);

    printf("Frequency is:%d",Ret);

    return 0;
}

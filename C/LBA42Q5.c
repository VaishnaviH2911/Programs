#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void DisplayN(char FName[],int iSize)
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
            for (i = 0; i <iSize; i++)
            {
                printf("%c",Arr[i]);
            }
        }
    }
    close(fd);
}
int main()
{
    char FileName[30];
    int iValue=0;

    printf("Enter file name:\n");
    scanf("%s", FileName);

    printf("Enter the number of characters:\n");
    scanf("%d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}

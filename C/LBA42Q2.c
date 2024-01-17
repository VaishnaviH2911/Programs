#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int CountSmall(char FName[])
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
                if((Arr[i]>='a')&&(Arr[i]<='z'))
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
    
    int ret=0, iSize = 0;

    printf("Enter the name of file that you want to open from current directory:\n");
    scanf("%s", FileName);

    ret=CountSmall(FileName);

    printf("Number of small letters are:%d",ret);

    return 0;
}

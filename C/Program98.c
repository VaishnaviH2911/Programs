#include<stdio.h>

int CountDigit(char str[]) //(char *str)
{
   int iCnt=0;

   while(*str!='\0')
   {
    if(*str>='0' && *str<='9')
    {
        iCnt++;
    }
    str++;
   }
   return iCnt;
}
int main()
{
   char Arr[20];
   int iRet=0;

   printf("Enter the String:\n");
   scanf("%[^'\n']s",Arr);
   //gets(Arr);

   iRet=CountDigit(Arr); //strlenX(100);

   printf("Number of digits are:%d\n",iRet);
    
    return 0;
}
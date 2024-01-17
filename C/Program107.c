#include<stdio.h>
#include<string.h>

void strtoggelX(char str[])
{
   int iCnt=0;

   while(*str!='\0')
   {
        if(*str>='a'&& *str<='z')
        {
            *str=*str-32;
        }
        else if(*str>='A'&& *str<='Z')
        {
            *str=*str+32;
        }

        str++;
   }
}
int main()
{
   char Arr[20];
   int iRet=0;

   printf("Enter the String:\n");
   scanf("%[^'\n']s",Arr);
   
    strtoggelX(Arr); 

   printf("Updated string is:%s\n",Arr);
    
    return 0;
}
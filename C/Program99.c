#include<stdio.h>

int CountVowels(char str[]) //(char *str)
{
   int iCnt=0;

   while(*str!='\0')
   {
    if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
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


   iRet=CountVowels(Arr); //strlenX(100);

   printf("Frequency of vowels is:%d\n",iRet);
    
    return 0;
}
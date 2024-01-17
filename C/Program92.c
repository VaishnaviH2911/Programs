//Display string
#include<stdio.h>

void Display(char str[]) //(char *str)
{
    printf("String is:%s\n",str);
}
int main()
{
   char Arr[20];

   printf("Enter the String:\n");
   scanf("%[^'\n']s",Arr);
   //gets(Arr);

   Display(Arr);
    
    return 0;
}
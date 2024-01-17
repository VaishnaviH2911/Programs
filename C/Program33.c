//Accept number and check whether no. is perfect number or not
//No. is perfect if sum of its all factors excluding the no. itself is equal to the no. itself.
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt=0;
    int iSum=0;

         //1      2       3
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)  //4
        {
            iSum=iSum+iCnt;
        }
    }
    if(iSum==iNo)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue=0;
    bool iRet=false;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=CheckPerfect(iValue);

    if(iRet==true)
    {
       printf("No. is perfect");
    }
    else{
        printf("No. is not perfect");
    }

    return 0;
}

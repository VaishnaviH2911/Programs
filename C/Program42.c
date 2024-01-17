//palindrome number checking
#include<stdio.h>
#include<Stdbool.h>

int CheckPalindrome(int iNo)
{
    int iCopy=iNo;//xerox kadhli
    int iDigit=0;
    int iRev=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=(iRev*10)+iDigit;
    }
    if(iRev==iCopy)
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
    bool bRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=CheckPalindrome(iValue);

    if(bRet==true)
    {
        printf("% d is palindrome number",iValue);
    }
    else{
        printf("%d is not palindrome number",iValue);
    }

    return 0;
}
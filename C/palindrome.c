#include<stdio.h>

int main()
{
    int n,r,sum=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
                                            /*logic*/
    while(n>0)                      
    {                                       //for e.g n=121
                                            //1st iteration
        r=n%10;                             //r=121%10=1
        sum=(sum*10)+r;                     //sum=(0*10)+1
        n=n/10;                             //n=121/10=12
    }                                       
                                            //2nd iteration
    if(temp==sum)                           //r=12%10
    {                                       //sum=(1*10)+2=12
        printf("No. is palindrome");        //n=12/10=1
    }   
    else{                                   //3rd iteration
        printf("No. is not palindrome");    //r=1%10=1
    }                                       //sum=(12*10)+1=121
                                            //n=1/10=0.1<0 hence stop
                                            //check if sum==temp


    
}
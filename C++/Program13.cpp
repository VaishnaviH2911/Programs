#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks<0.00) || (fMarks>100.00))  //filter
    {
        printf("Invalid Marks...\n");
    }
    if((fMarks>=0) && (fMarks<35.00))
    {
        printf("You are Fail...\n");
    }
    else if((fMarks>=35) && (fMarks<50.00))
    {
        printf("You are Pass...!!\n");
    }
    else if((fMarks>=50) && (fMarks<60.00))
    {
        printf("Your class is 2nd class");
    }
    else if((fMarks>=60) && (fMarks<75.00))
    {
        printf("Your class is 1st class");
    }
    else if((fMarks>=75.00) && (fMarks<=100.00))
    {
        printf("Your class is 1st class with distinction");
    }
}

int main()
{
    float fValue=0.0f;

    printf("Enter your percentage:\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}
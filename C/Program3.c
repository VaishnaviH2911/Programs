//Accept 2 values from user and perform the addition

//Step 1: Understand the prb statement
//Conclusion: We have to accept two integer and perform addition

//step 2:Write the algorithm
/*
    START
        Accept 1st no. from user and store it into no1
        Accept 1st no. from user and store it into no2
        Create one variable to store the result named as Ans
        Perform Addition of no1 and no2, store the result in Ans
        Display the result from Ans to the user
    STOP
*/

//Step 3: Decide the programming language(c/c++/Java/Python)
//We select C programming

//Step 4: Write program using the c

#include<stdio.h>

int main()
{
    int i,j,k;

    printf("Enter 1st numbers:\n");
    scanf("%d",&i);

    printf("Enter 2nd numbers:\n");
    scanf("%d",&j);

    k=i+j;

    printf("Addition is:%d",k);

    return 0;
}
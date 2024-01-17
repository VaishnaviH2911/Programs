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
////////////////////////////////////////////////////////////
//Function Name:   Addition
//Description:     It is used to perform addition of two integer
//Input Argument:  Integer, Integer
//Output:          Integer
//Author:          Vaishnavi Mahadev Hagawane
//Date:            25/09/2023
//////////////////////////////////////////////////////////////
int Addition(int iNo1, int iNo2)
{
    int iSum=0;       //Variable to store the value of Addition
    iSum= iNo1+ iNo2;
    return iSum;

}
/////////////////////////////////////////////////////////////
//
//Entry point of an Application which perform addition of 2 integers
//
//////////////////////////////////////////////////////////////
int main()
{
    auto int iValue1=0;   //Variable to store 1st input
    auto int iValue2=0;   //Variable to store 2nd input
    auto int iAns=0;      //Variable to store the result

    printf("Enter 1st numbers:\n");
    scanf("%d",&iValue1);

    printf("Enter 2nd numbers:\n");
    scanf("%d",&iValue2);

    iAns=Addition(iValue1,iValue2);  //Function call to perform Addition

    printf("Addition is:%d",iAns);

    return 0;
}

//Step 5: Test the code
/*
Test case 1:
Input: 10 11
Output:21

Test case 2:
Input: 10 0
Output:10

Test case 3:
Input: 12 -6
Output:6

Test case 4:
Input: -6 -5 
Output:-11
*/
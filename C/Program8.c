//Prob. state: Accept radius from user and calculate area of circle
//step1: Understand the prb. state.
//conclusion: We are going to use formula PI*R*R

/*step2: Algorithm

    start
        Accept radius from user and store into radius
        Create variable as PI and store value 3.14
        Calculate area PI*RADIUS*RADIUS
        Display the value of Area to the user
    STOP
*/
#include<stdio.h>

////////////////////////////////////////////////////////
// Function name: CalculateArea
// Description:   It is used to calculate area of a circle
// Input:         Float
// Output:        Float
// Author name:   Vaishnavi
// Date:          02/10/2023
/////////////////////////////////////////////////////////
#define PI 3.14

float CalculateArea(float fValue)
{
    auto float fAns=0.0f;

    fAns=PI*fValue*fValue;
    return fAns;
}
int main()
{
    auto float fRadius=0.0f;
    auto float fArea=0.0f;

    printf("Enter the radius:\n");
    scanf("%f",&fRadius);

    fArea=CalculateArea(fRadius);

    printf("Area of circle is:%f",fArea);

    return 0;

}


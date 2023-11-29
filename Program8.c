//Accept radius from user and calculate the area of circle

//Step 1 : Understand the problem statement
// Conclusion : We are going to use formula PI*R*R

//Algorithm

/*
    START
       Accept radius from user and store it into Radius
       Create variable as PI and store value 3.14
       Calculate area PI * Radius * Radius
       Display the value of Area to the User
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :          Calculate Area
// Description :            It is used to calculate Area of circle
// Input Arguments :        Float
// Output :                 Float
// Author :                 Swapna Narsinha Tungikar
// Date :                   02/10/2023
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CalculateArea(float fValue)
{
    auto float fAns = 0.0f;
    auto const float PI = 3.14f;

    fAns = PI * fValue * fValue;
    return fAns;
}

int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius of circle : \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of Circle is : %f\n",fArea);

    return 0;
}
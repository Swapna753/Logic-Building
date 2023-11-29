//Problem Statement : Accept 2 values from user and perform the addition.

// Step 1 : Understand the problem statement.
// Conclusion : We have to accept 2 integers and perform its addition.

// Write the algorithm
/*
    START
    Accept first number From user and store it into No1
        Accept first number From user and store it into No2
        Create one variable to store the result named as Ans
        Perform Addition of No1 and No2, Store the result in Ans
        Display the result from Ans to the User
    STOP
*/

//Step 3 : Decide the programming language
// We select C language

// Step 4 : Write the program

#include<stdio.h>

int main()
{
    int i, j, k;

    printf("Enter first number : \n");
    scanf("%d", &i);

    printf("Enter second number : \n");
    scanf("%d", &j);

    k = i + j;

    printf("Addition is : %d\n",k);

    return 0;
}
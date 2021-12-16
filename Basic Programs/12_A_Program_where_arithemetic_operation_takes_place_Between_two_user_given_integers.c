#include <stdio.h>
#include <conio.h>
int main()
{
    int num1 = 0, num2 = 0;

    printf("\nEnter two integer:");
    scanf("%d%d",&num1,&num2);
    printf("\nDivision of %d and %d is: %d ", num1, num2, num1 / num2);
    printf("\nMultiplication of %d and %d is: %d ", num1, num2, num1 * num2);
    printf("\nAddition of %d and %d is: %d ", num1, num2, num1 + num2);
    printf("\nSubstraction of %d and %d is: %d ", num1, num2, num1 - num2);
    printf("\nModulus of %d and %d is: %d ", num1, num2,num1%num2);

    printf("\nThanks for visiting");

    getch();
    return 0;
}
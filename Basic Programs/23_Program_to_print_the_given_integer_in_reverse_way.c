#include <stdio.h>
#include <conio.h>
int main()
{
    int num1 = 0, temp = 0, revNum = 0;
    printf("Enter the number: \n");
    scanf("%d",&num1);
    num1 = temp;
    printf("My given number is %d\n", num1);
    getch();
    while (temp > 0)
    {
        revNum = (revNum * 10) + (temp % 10);
        temp /= 10;
    }
    printf("The reverse of %d is %d.\n", num1, revNum);
    printf("\nThanks for visiting");
    getch();
    return 0;
}
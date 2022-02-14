#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 0, num = 0, pnum[5] = {0}, nnum[5] = {0};

    printf("Enter an integer : \n");
    scanf("%d",&num);
    if (num > 0)
    {
        if (0 == num % 2)
        {
            printf("Its a Even Positive");
        }
        else
        {
            printf("Its an Odd Positive");
        }
    }
    if (num < 0)
    {
        if (0 == num % 2)
        {
            printf("Its a Even Negative");
        }
        else
        {
            printf("Its an Odd Negative");
        }
    }
    if (0 == num)
    {
        printf("Its Zero");
    }

    getch();
    return 0;
}